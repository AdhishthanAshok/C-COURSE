import express from "express";

const app = express();

const joke = [
  { id: 1, title: "1 Joke", content: "This is a Joke" },
  { id: 2, title: "2 Joke", content: "This is a Joke" },
  { id: 3, title: "3 Joke", content: "This is a Joke" },
  { id: 4, title: "4 Joke", content: "This is a Joke" },
  { id: 6, title: "5 Joke", content: "This is a Joke" },
  { id: 6, title: "6 Joke", content: "This is a Joke" },
  { id: 6, title: "7 Joke", content: "This is a Joke" },
];

app.get("/api/jokes", (req, res) => {
  res.send(joke);
});

const port = process.env.PORT || 3000; // In production ,only process.env.PORT is necessary , but for local machine we can use || 3000 , in case no PORT is allocated in .env file , the app will listen on port 3000

app.listen(port, () => {
  console.log(`Server is listening at http://localhost:${port}`);
});
