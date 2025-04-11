import React from "react";
import "./Table.css";
import props_type from 'prop-types'
export const Table = ({details}) => {
  return (

    <>
      <table>
      <thead>
        <tr>
          <th>Name</th>
          <th>Age</th>
          <th>Is Married</th>
        </tr>
      </thead>
      <tbody>
        {details.map(data=>
          <tr key={data.id}>
            <td>{data.name}</td>
            <td>{data.age}</td>
            <td>{data.ismarried?"Married":"UnMarried"}</td>
          </tr>
        )}
      </tbody>
    
      </table>
    
    </>
  );
};
Table.props_type={
 details:props_type.arrayOf(
  props_type.shape({
      id:props_type.number.isRequired, 
      name:props_type.string.isRequired,
      age:props_type.number.isRequired,
      ismarried:props_type.bool.isRequired  
  })
 )
}
