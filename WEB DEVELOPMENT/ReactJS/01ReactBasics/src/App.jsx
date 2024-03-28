import { useState } from "react";
import "./App.css";

function App() {
  let [counter, setCounter] = useState(5);
  const addValue = () => {
    setCounter(counter + 1);
  };
  const removeValue = () => {
    setCounter(counter - 1);
  };
  const resetValue = () => {
    setCounter(0);
  };
  return (
    <div className="Card">
      <h2>
        Counter <span id="app">APP</span>{" "}
      </h2>
      <h2>
        Counter : <span id="counter">{counter}</span>{" "}
      </h2>
      <button className="button" onClick={addValue}>
        Add Value
      </button>{" "}
      <br />
      <button className="button" onClick={removeValue}>
        Remove Value
      </button>{" "}
      <br />
      <button className="button" onClick={resetValue}>
        Reset Value
      </button>
    </div>
  );
}

export default App;
