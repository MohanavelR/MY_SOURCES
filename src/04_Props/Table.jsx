import React from "react";
import "./Table.css";

export const Table = (props) => {
  return (
    <>    
      <table>
        <tr>
          <th>Name</th>
          <td>{props.name}</td>
        </tr>
        <tr>
          <th>Age</th>
          <td>{props.age}</td>
        </tr>
        <tr>
          <th>Is Married</th>
          <td>{props.ismarried ? "Married" : "UnMarried"}</td>
        </tr>
      </table>
    
    </>
  );
};
