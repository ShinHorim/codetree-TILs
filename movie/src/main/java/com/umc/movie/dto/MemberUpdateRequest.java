// src/main/java/com/umc/movie/dto/MemberUpdateRequest.java
package com.umc.movie.dto;

import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.Size;

public record MemberUpdateRequest(

        @NotBlank(message = "닉네임을 입력해주세요.")
        @Size(min = 2, max = 12, message = "닉네임은 2자 이상 12자 이하여야 합니다.")
        String nickname
) {
}//@Setter를 열어두는 대신 이렇게 의도가 드러나는 메서드만 열어두면, 나중에 코드를 읽을 때 "이 엔티티에서 바뀔 수 있는 값은 닉네임뿐이구나"를 바로 알 수 있습니다.