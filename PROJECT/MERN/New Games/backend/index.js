const express = require("express");
const mongoose = require("mongoose");
const cors = require("cors");

const app = express();

app.use(cors());
app.use(express.json());

const objects = [
  { id: 1, name: "Hello", role: "Developer" },
  { id: 2, name: "World", role: "Designer" },
  { id: 3, name: "c++", role: "Designer" },
  { id: 4, name: "c#", role: "Designer" },
];

app.get("/", (req, res) => {
  res.send(objects);
});

app.patch("/update/:id", (req, res) => {
  const id = parseInt(req.params.id);

  const newData = req.body;

  const object = objects.find((obj) => obj.id === id);

  if (!object) {
    res.send("Object not found");
  }

  Object.assign(object, newData);

  res.send(object);
});

const PORT = 3000;
app.listen(PORT, () => {
  console.log(`Server is started at : http://localhost:${PORT} `);
});
