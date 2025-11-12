void func_001773a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001773a0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001773b4: lw $v0, 4($s0)
    if (v0 == 0) goto label_0x1773e0;                           // 0x001773b8: beqz $v0, 0x1773e0
    func_00177730();  // 0x177710                                // 0x001773c4: jal 0x177710
    func_001775b0();  // 0x1774c0                                // 0x001773d0: jal 0x1774c0
    goto label_0x1774ac;                                        // 0x001773d8: b 0x1774ac
label_0x1773e0:
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001773e0: lw $v0, 8($s0)
    if (v0 == 0) goto label_0x177418;                           // 0x001773e4: beqz $v0, 0x177418
    a2 = 1;                                                     // 0x001773e8: addiu $a2, $zero, 1
    func_00177730();  // 0x177710                                // 0x001773ec: jal 0x177710
    func_00177650();  // 0x1775b0                                // 0x001773f8: jal 0x1775b0
    a1 = 6;                                                     // 0x00177404: addiu $a1, $zero, 6
    func_00175170();  // 0x175120                                // 0x00177408: jal 0x175120
    goto label_0x1774a8;                                        // 0x00177410: b 0x1774a8
    *(uint32_t*)((s1) + 0xb48) = 0;                             // 0x00177414: sw $zero, 0xb48($s1)
label_0x177418:
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00177418: lw $v0, 0xc($s0)
    if (v0 == 0) goto label_0x177450;                           // 0x0017741c: beqz $v0, 0x177450
    a2 = 2;                                                     // 0x00177420: addiu $a2, $zero, 2
    func_00177730();  // 0x177710                                // 0x00177424: jal 0x177710
    func_001776f0();  // 0x177650                                // 0x00177430: jal 0x177650
    a1 = 5;                                                     // 0x0017743c: addiu $a1, $zero, 5
    func_00175170();  // 0x175120                                // 0x00177440: jal 0x175120
    goto label_0x1774a8;                                        // 0x00177448: b 0x1774a8
    *(uint32_t*)((s1) + 0xb44) = 0;                             // 0x0017744c: sw $zero, 0xb44($s1)
label_0x177450:
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x00177450: lw $v0, 0x20($s0)
    if (v0 == 0) goto label_0x1774a0;                           // 0x00177454: beqz $v0, 0x1774a0
    a2 = 7;                                                     // 0x00177458: addiu $a2, $zero, 7
    func_00177730();  // 0x177710                                // 0x0017745c: jal 0x177710
    func_00177710();  // 0x1776f0                                // 0x00177468: jal 0x1776f0
    a1 = 6;                                                     // 0x00177474: addiu $a1, $zero, 6
    func_00175170();  // 0x175120                                // 0x00177478: jal 0x175120
    a1 = 5;                                                     // 0x00177484: addiu $a1, $zero, 5
    func_00175170();  // 0x175120                                // 0x00177488: jal 0x175120
    *(uint32_t*)((s1) + 0xb48) = 0;                             // 0x00177490: sw $zero, 0xb48($s1)
    goto label_0x1774a8;                                        // 0x00177494: b 0x1774a8
    *(uint32_t*)((s1) + 0xb44) = 0;                             // 0x00177498: sw $zero, 0xb44($s1)
    /* nop */                                                   // 0x0017749c: nop 
label_0x1774a0:
    goto label_0x1774ac;                                        // 0x001774a0: b 0x1774ac
    v0 = -1;                                                    // 0x001774a4: addiu $v0, $zero, -1
label_0x1774a8:
label_0x1774ac:
    return;                                                     // 0x001774b8: jr $ra
    sp = sp + 0x20;                                             // 0x001774bc: addiu $sp, $sp, 0x20
}