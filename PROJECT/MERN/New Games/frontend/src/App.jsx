import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";
import Home from "./components/Home";
import Edit from "./components/Edit";

function App() {
  const [count, setCount] = useState(0);

  return (
    <div className="bg-gray-900 h-screen flex flex-col  items-center gap-10">
      <Home />
      <Edit />
    </div>
  );
}

export default App;
