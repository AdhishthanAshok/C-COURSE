import { useState } from "react";
import "./App.css";

function App() {
  const [count, setCount] = useState(0);

  return (
    <div className="main">
      <div className="value_display">
        <label> Value : {count}</label>
      </div>
      <div className="buttons">
        <button onClick={() => setCount(count + 1)}>Addition</button>
        <button onClick={() => setCount(count - 1)}>Substract</button>
        <button onClick={() => setCount(2 * count)}>Multiply 2</button>
        <button onClick={() => setCount(count + 2)}>Add 2</button>
        <button onClick={() => setCount(0)}>Set to 0</button>
        <button onClick={() => setCount(count / 2)}>Divide by 2</button>
      </div>
    </div>
  );
}

export default App;
