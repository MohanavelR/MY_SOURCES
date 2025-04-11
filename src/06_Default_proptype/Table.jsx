import React from "react";
import "./Table.css";
import props_type from 'prop-types'
export const Table = (props) => {
  return (

    <>
      <table>
        <tbody>

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
        </tbody>
      </table>
    
    </>
  );
};
Table.props_type={
 name:props_type.string.isRequired,
 age:props_type.number.isRequired,
 ismarried:props_type.bool.isRequired
}
Table.defaultProps={
   name:"No name",
   age:0,
   ismarried:false
}