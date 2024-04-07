import { useState } from "react";
import "./App.css";

function App() {
  const [color, setColor] = useState("olive");
  return (
    <div
      className="relative w-full h-screen duration-200 flex justify-center items-center"
      style={{ backgroundColor: color }}
    >
      <div className="fixed bottom-12 flex flex-wrap justify-center">
        <div className="flex flex-wrap justify-center gap-3 shadow-lg bg-white p-4 rounded-3xl ">
          <button
            className="outline-none px-4 py-3 rounded-2xl"
            style={{ backgroundColor: "red" }}
            onClick={() => setColor("red")}
          >
            Red
          </button>
          <button
            className="outline-none px-4 py-3 rounded-2xl"
            style={{ backgroundColor: "blue" }}
            onClick={() => setColor("blue")}
          >
            Blue
          </button>
          <button
            className="outline-none px-4 py-3 rounded-2xl"
            style={{ backgroundColor: "green" }}
            onClick={() => setColor("green")}
          >
            Green
          </button>
          <button
            className="outline-none px-4 py-3 rounded-2xl"
            style={{ backgroundColor: "pink" }}
            onClick={() => setColor("pink")}
          >
            Pink
          </button>
          <button
            className="outline-none px-4 py-3 rounded-2xl"
            style={{ backgroundColor: "brown" }}
            onClick={() => setColor("brown")}
          >
            Brown
          </button>
          <button
            className="outline-none px-4 py-3 rounded-2xl"
            style={{ backgroundColor: "gray" }}
            onClick={() => setColor("gray")}
          >
            Gray
          </button>
          <button
            className="outline-none px-4 py-3 rounded-2xl"
            style={{ backgroundColor: "aqua" }}
            onClick={() => setColor("aqua")}
          >
            Aqua
          </button>
          <button
            className="outline-none px-4 py-3 rounded-2xl text-white"
            style={{ backgroundColor: "black" }}
            onClick={() => setColor("olive")}
          >
            Reset
          </button>
        </div>
      </div>
    </div>
  );
}

export default App;
