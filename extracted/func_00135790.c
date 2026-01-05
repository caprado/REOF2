void func_00135790() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00135790: addiu $sp, $sp, -0x20
    if (a2 == 0) goto label_0x1358c0;                           // 0x001357a4: beqz $a2, 0x1358c0
    v1 = *(int8_t*)(a2);                                        // 0x001357ac: lb $v1, 0($a2)
    v0 = 0x3a;                                                  // 0x001357b0: addiu $v0, $zero, 0x3a
    if (v1 == v0) goto label_0x135808;                          // 0x001357b4: beq $v1, $v0, 0x135808
    if (v1 == 0) goto label_0x135818;                           // 0x001357bc: beqz $v1, 0x135818
    a3 = 0x3a;                                                  // 0x001357c4: addiu $a3, $zero, 0x3a
    a0 = *(uint8_t*)(a1);                                       // 0x001357c8: lbu $a0, 0($a1)
    /* nop */                                                   // 0x001357cc: nop 
    v1 = s0 + t0;                                               // 0x001357d0: addu $v1, $s0, $t0
    t0 = t0 + 1;                                                // 0x001357d4: addiu $t0, $t0, 1
    v0 = (t0 < 0x129) ? 1 : 0;                                  // 0x001357d8: slti $v0, $t0, 0x129
    a1 = a2 + t0;                                               // 0x001357dc: addu $a1, $a2, $t0
    if (v0 == 0) goto label_0x13580c;                           // 0x001357e0: beqz $v0, 0x13580c
    *(uint8_t*)(v1) = a0;                                       // 0x001357e4: sb $a0, 0($v1)
    v0 = *(int8_t*)(a1);                                        // 0x001357e8: lb $v0, 0($a1)
    if (v0 == a3) goto label_0x135810;                          // 0x001357ec: beq $v0, $a3, 0x135810
    /* nop */                                                   // 0x001357f0: nop 
    /* bnezl $v0, 0x1357d0 */                                   // 0x001357f4: bnezl $v0, 0x1357d0
    a0 = *(uint8_t*)(a1);                                       // 0x001357f8: lbu $a0, 0($a1)
    goto label_0x135810;                                        // 0x001357fc: b 0x135810
    /* nop */                                                   // 0x00135800: nop 
    /* nop */                                                   // 0x00135804: nop 
label_0x135808:
label_0x13580c:
    v0 = *(int8_t*)(a1);                                        // 0x0013580c: lb $v0, 0($a1)
label_0x135810:
    if (v0 != 0) goto label_0x135840;                           // 0x00135810: bnez $v0, 0x135840
    v1 = s0 + t0;                                               // 0x00135814: addu $v1, $s0, $t0
label_0x135818:
    v0 = s0 + t0;                                               // 0x00135818: addu $v0, $s0, $t0
    func_0010ae00();  // 10ae00                                // 0x00135820: jal 0x10ae00
    *(uint8_t*)(v0) = 0;                                        // 0x00135824: sb $zero, 0($v0)
    func_00107ab8();  // 107ab8                                // 0x00135830: jal 0x107ab8
    a2 = v0 + 1;                                                // 0x00135834: addiu $a2, $v0, 1
    goto label_0x1358c0;                                        // 0x00135838: b 0x1358c0
    *(uint8_t*)(s0) = 0;                                        // 0x0013583c: sb $zero, 0($s0)
label_0x135840:
    t0 = t0 + 1;                                                // 0x00135840: addiu $t0, $t0, 1
    v0 = 2;                                                     // 0x00135844: addiu $v0, $zero, 2
    if (t0 != v0) goto label_0x135858;                          // 0x00135848: bne $t0, $v0, 0x135858
    *(uint8_t*)(v1) = 0;                                        // 0x0013584c: sb $zero, 0($v1)
    *(uint8_t*)(s0) = 0;                                        // 0x00135850: sb $zero, 0($s0)
label_0x135858:
    v0 = (t0 < 0x129) ? 1 : 0;                                  // 0x00135858: slti $v0, $t0, 0x129
    if (v0 == 0) goto label_0x13589c;                           // 0x0013585c: beqz $v0, 0x13589c
    v1 = a2 + t0;                                               // 0x00135864: addu $v1, $a2, $t0
    v0 = *(int8_t*)(v1);                                        // 0x00135868: lb $v0, 0($v1)
    if (v0 == 0) goto label_0x13589c;                           // 0x0013586c: beqz $v0, 0x13589c
    v0 = *(uint8_t*)(v1);                                       // 0x00135874: lbu $v0, 0($v1)
    a1 = a1 + 1;                                                // 0x00135878: addiu $a1, $a1, 1
    a0 = (a1 < 0x129) ? 1 : 0;                                  // 0x0013587c: slti $a0, $a1, 0x129
    v1 = a2 + a1;                                               // 0x00135880: addu $v1, $a2, $a1
    *(uint8_t*)(a3) = v0;                                       // 0x00135884: sb $v0, 0($a3)
    if (a0 == 0) goto label_0x13589c;                           // 0x00135888: beqz $a0, 0x13589c
    a3 = a3 + 1;                                                // 0x0013588c: addiu $a3, $a3, 1
    v0 = *(int8_t*)(v1);                                        // 0x00135890: lb $v0, 0($v1)
    /* bnezl $v0, 0x135878 */                                   // 0x00135894: bnezl $v0, 0x135878
    v0 = *(uint8_t*)(v1);                                       // 0x00135898: lbu $v0, 0($v1)
label_0x13589c:
    v0 = a1 - t0;                                               // 0x0013589c: subu $v0, $a1, $t0
    v0 = s1 + v0;                                               // 0x001358a4: addu $v0, $s1, $v0
    *(uint8_t*)(v0) = 0;                                        // 0x001358b4: sb $zero, 0($v0)
    return func_00135318();  // Tail call                        // 0x001358b8: j 0x1352b8
    sp = sp + 0x20;                                             // 0x001358bc: addiu $sp, $sp, 0x20
label_0x1358c0:
    return;                                                     // 0x001358cc: jr $ra
    sp = sp + 0x20;                                             // 0x001358d0: addiu $sp, $sp, 0x20
}