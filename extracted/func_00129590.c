void func_00129590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00129590: addiu $sp, $sp, -0x20
    a3 = -1;                                                    // 0x001295a4: addiu $a3, $zero, -1
    a0 = 7;                                                     // 0x001295a8: addiu $a0, $zero, 7
    func_00128268();  // 0x1281b8                                // 0x001295b4: jal 0x1281b8
    t0 = -1;                                                    // 0x001295b8: addiu $t0, $zero, -1
    a0 = 0x22 << 16;                                            // 0x001295bc: lui $a0, 0x22
    if (s0 != 0) goto label_0x1295d8;                           // 0x001295c0: bnez $s0, 0x1295d8
    a0 = &str_00222930;  // "E2092302:'adxf->stm' is NULL.(ADXF_StopNw)" // 0x001295c4: addiu $a0, $a0, 0x2930
    func_00127de8();  // 0x127d90                                // 0x001295c8: jal 0x127d90
    /* nop */                                                   // 0x001295cc: nop 
    goto label_0x129640;                                        // 0x001295d0: b 0x129640
    v0 = -3;                                                    // 0x001295d4: addiu $v0, $zero, -3
label_0x1295d8:
    v1 = *(int8_t*)((s0) + 1);                                  // 0x001295d8: lb $v1, 1($s0)
    s1 = 1;                                                     // 0x001295dc: addiu $s1, $zero, 1
    if (v1 == s1) goto label_0x12963c;                          // 0x001295e0: beq $v1, $s1, 0x12963c
    v0 = 3;                                                     // 0x001295e4: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1295f8;                          // 0x001295e8: bnel $v1, $v0, 0x1295f8
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001295ec: lw $a0, 4($s0)
    goto label_0x12963c;                                        // 0x001295f0: b 0x12963c
    *(uint8_t*)((s0) + 1) = s1;                                 // 0x001295f4: sb $s1, 1($s0)
label_0x1295f8:
    if (a0 != 0) goto label_0x129618;                           // 0x001295f8: bnez $a0, 0x129618
    /* nop */                                                   // 0x001295fc: nop 
    a0 = 0x22 << 16;                                            // 0x00129600: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00129604: jal 0x127d90
    a0 = &str_00222958;  // "E9040825:'adxf' is NULL.(ADXF_Seek)" // 0x00129608: addiu $a0, $a0, 0x2958
    goto label_0x129640;                                        // 0x0012960c: b 0x129640
    v0 = -1;                                                    // 0x00129610: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00129614: nop 
label_0x129618:
    func_00130408();  // 0x1303a0                                // 0x00129618: jal 0x1303a0
    /* nop */                                                   // 0x0012961c: nop 
    *(uint8_t*)((s0) + 3) = s1;                                 // 0x00129620: sb $s1, 3($s0)
    a0 = 7;                                                     // 0x00129624: addiu $a0, $zero, 7
    a1 = 1;                                                     // 0x00129628: addiu $a1, $zero, 1
    a3 = -1;                                                    // 0x00129630: addiu $a3, $zero, -1
    func_00128268();  // 0x1281b8                                // 0x00129634: jal 0x1281b8
    t0 = -1;                                                    // 0x00129638: addiu $t0, $zero, -1
label_0x12963c:
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x0012963c: lw $v0, 0x14($s0)
label_0x129640:
    return;                                                     // 0x0012964c: jr $ra
    sp = sp + 0x20;                                             // 0x00129650: addiu $sp, $sp, 0x20
}