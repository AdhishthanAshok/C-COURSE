import { useEffect, useState } from "react";
import "./App.css";
import axios from "axios";

function App() {
  const [jokes, setJokes] = useState([]);
  useEffect(() => {
    axios
      .get("/api/jokes")
      .then((response) => {
        setJokes(response.data);
      })
      .catch((error) => {
        console.log(error);
      });
  });

  return (
    <>
      <h1>Hello Full Stack App</h1>
      <p>JOKES : {jokes.length}</p>
      {jokes.map(
        (
          joke,
          index // <-- when you wrap something in parentheses ( ), it implicitly returns that value. So, in this case, the arrow function implicitly returns the JSX <div> element.
        ) => (
          <div key={index}>
            {/* <h3 style={{ display: "inline-block" }}> id : {joke.id}</h3>
            <h3 style={{ display: "inline-block" }}>&nbsp; Index : {index}</h3> */}
            <h3>{joke.title}</h3>
            <p>{joke.content}</p>
          </div>
        )
      )}
    </>
  );
}

export default App;
