"use strict";

const notesKey = "notes";

let notesData = [];

let notesDiv = document.getElementById("notes");
let contentArea = document.getElementById("content");

document.querySelector("#saveBtn").addEventListener("click", saveData);
document.querySelector("#clearBtn").addEventListener("click", removeAll)

loadData();

function saveData()
{
    if (contentArea.value.trim().length === 0) return;

    const entry =
        {
            date: new Date().toLocaleString("de-AT"),
            content: contentArea.value.trim(),
        };

    notesData.push(entry);

    contentArea.value = "";

    renderData();

    localStorage.setItem(notesKey, JSON.stringify(notesData));
}

function renderData()
{
    let output = "";

    for (let entry in notesData)
    {
        output += `<div class="mt-3 mb-3"><button class="btn btn-danger deleteBtn" onclick="removeEntry(${entry})">X</button><span><em>${notesData[entry].date}</em> -- ${notesData[entry].content}</span></div>`;
    }

    notesDiv.innerHTML = output;
}

function removeEntry(entry)
{
    notesData.splice(entry, 1);

    localStorage.setItem(notesKey, JSON.stringify(notesData));

    renderData();
}

function removeAll()
{
    notesData = [];
    localStorage.setItem(notesKey, JSON.stringify(notesData));
    renderData();
}

function loadData()
{
    notesData = JSON.parse(localStorage.getItem(notesKey)) ?? [];

    renderData();
}