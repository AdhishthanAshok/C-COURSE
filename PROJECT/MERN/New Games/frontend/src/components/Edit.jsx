import React, { useState } from "react";

const Edit = () => {
  const [details, setDetails] = useState({
    name: "",
    role: "",
  });

  const change = async (e) => {
    setDetails[{ ...details, [e.target.data]: e.target.value }];
  };
  return (
    <div className="w-40 flex flex-col gap-2  text-gray-50">
      <label className="text-gray-50 ">Name</label>
      <input
        type="text"
        value="Type name here"
        onChange={change}
        className="text-gray-50 bg-gray-800"
      />
      <label className="text-gray-50 ">Role</label>
      <input
        type="text"
        value="Type role here"
        onChange={change}
        className="text-gray-50 bg-gray-800"
      />
    </div>
  );
};

export default Edit;
