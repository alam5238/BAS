<div class="container-fluid" style="padding-top:35px;">
	<%= _.template($('#variable_constructor').html())({id:"Variable", description:tr("Variable With List"), default_variable: ""}) %>
    <%= _.template($('#input_constructor').html())({id:"Value", description:tr("Value"), default_selector: "string", min_number: -999999, value_number: 0}) %>
</div>
<%= _.template($('#back').html())({action:"executeandadd", visible:true}) %>
