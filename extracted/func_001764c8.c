void func_001764c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001764c8: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x001764e0: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x001764e8: lui $a1, 0xff00
    if (v0 == 0) goto label_0x176510;                           // 0x001764ec: beqz $v0, 0x176510
    a1 = a1 | 0x129;                                            // 0x001764f8: ori $a1, $a1, 0x129
    return func_00169940();  // Tail call                        // 0x00176508: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0017650c: addiu $sp, $sp, 0x20
label_0x176510:
    if (s1 == 0) goto label_0x176548;                           // 0x00176510: beqz $s1, 0x176548
    s2 = s0 + 0xcc0;                                            // 0x00176514: addiu $s2, $s0, 0xcc0
    *(uint32_t*)((s2) + 0x290) = s1;                            // 0x00176518: sw $s1, 0x290($s2)
    a1 = 0xf;                                                   // 0x0017651c: addiu $a1, $zero, 0xf
    a2 = 5;                                                     // 0x00176520: addiu $a2, $zero, 5
    func_00175170();  // 0x175120                                // 0x00176524: jal 0x175120
    a1 = 0x47;                                                  // 0x00176530: addiu $a1, $zero, 0x47
    func_00175170();  // 0x175120                                // 0x00176534: jal 0x175120
    goto label_0x176570;                                        // 0x0017653c: b 0x176570
    /* nop */                                                   // 0x00176544: nop 
label_0x176548:
    a1 = 0x47;                                                  // 0x00176548: addiu $a1, $zero, 0x47
    a2 = 1;                                                     // 0x0017654c: addiu $a2, $zero, 1
    func_00175170();  // 0x175120                                // 0x00176550: jal 0x175120
    a1 = 0xf;                                                   // 0x0017655c: addiu $a1, $zero, 0xf
    func_00175170();  // 0x175120                                // 0x00176560: jal 0x175120
    a2 = 1;                                                     // 0x00176564: addiu $a2, $zero, 1
    *(uint32_t*)((s2) + 0x290) = 0;                             // 0x00176568: sw $zero, 0x290($s2)
label_0x176570:
    return;                                                     // 0x00176580: jr $ra
    sp = sp + 0x20;                                             // 0x00176584: addiu $sp, $sp, 0x20
}