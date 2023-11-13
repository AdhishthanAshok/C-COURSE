const { Console } = require("console");
const http = require("http");

const port = process.env.PORT || 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200; // 200 is for OK , 404 is for Not Found  500 for Server Error
  res.setHeader("Content-Type", "text/html");
  console.log(req.url);
  if (req.url == "/") {
    res.statusCode = 200;
    res.end(
      "<h1>This is my Name</h1> <p>This is the way to make a program</p>"
    );
  } else if (req.url == "/about") {
    res.statusCode = 200;
    res.end(
      "<h1>This is my About page</h1> <p>This is the way to make a program</p>"
    );
  } else if (req.url == "/home") {
    res.statusCode = 200;
    res.end(
      "<h1>This is my Home page</h1> <p>This is the way to make a program</p>"
    );
  } else {
    res.statusCode = 404;
    res.end("<p>Page was not found in the server</p>");
  }
});

server.listen(port, () => {
  console.log("Server is Listening on port ${port}");
});
