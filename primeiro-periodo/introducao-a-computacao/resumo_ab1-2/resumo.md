# EstGeoMag

O projeto apresenta uma proposta de integração entre soluções de Hardware, Software e Internet das Coisas com um baixo custo com a finalidade de obtenção de grandezas geomagnéticas com alta resolução e precisão.

O planeta Terra possui um campo magnético ao seu redor gerado pelo seu núcleo, composto por metal de forma líquida com temperaturas de aproximadamente 6000 °C, ao redor deste campo ele é exposto à radiação solar que de acordo com sua intensidade podem provocar fenómenos conhecidos como “tempestades solares”, que podem causar desde oscilações de tensão em linhas de transmissão de energia elétrica até interferências na comunicação de dados via satélite.

## Principais fenómenos que afetam o geoespaço:

### Radiação eletromagnética:
Com sua chegada imediata e sua duração aproximada de 1 a 2 horas, mediante raios-x e uma extrema radiação ultravioleta pode provocar interferência em satélites e  radares.

### Partículas de Alta Energia
Sua chegada varia de 15 minutos a poucas horas e tem duração de dias, trazendo consigo um evento de prótons que pode causar desorientação em satélites, falhas da leitura em sensores e danos em espaçonaves.

### Tempestades geomagnéticas

Chegada num período de 2 a 4 dias, produz tempestades geomagnéticas podendo danificar cargas e provocando arraste de espaçonaves, assim como provocar erros nas trajetórias de lançamentos de espaçonaves, anomalias na propagação de rádio e black-out de energia elétrica. 
Em casos de alta intensidade os problemas tornam-se de proporções alarmantes acionando sistemas de proteção, colapso de redes de distribuição provocando blackouts, transformadores danificados.


## Hardware, Software e Internet das Coisas no EstGeoMag:

### Hardware

A arquitetura do hardware do EstGeoMag é dividida em duas unidades, a primeira é responsável por coletar os dados e isso é feito através de sensores, já a segunda tem função de processar os dados que foram coletados.

Para o funcionamento do EstGeoMag são necessários três sensores que acompanham as variações do campo magnético terrestre nos eixos Norte-Sul, Leste-Oeste e Vertical, as variações associam um sinal eletrico gerado nos sensores que é proporcional ao campo medido.

### Software

A parte do software é dividida em um sistema operacional Linux, um banco de dados escrito em SQL para salvar os dados coletados pelos sensores, um programa escrito em Python para fazer o processamento dos dados recebidos e um servidor web para divulgação dos resultados, além disso, ainda é possivel uma reprogramação de todo o sistema para que sejam exibidos os resultados de maneira mais dinâmica encurtando o intervalo das medições, deixando assim, estas mais verossimias, contudo, pelo intervalo reduzido entre as medições abre a possibilidade de leituras sem uma real variação.

