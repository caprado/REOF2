void func_001774c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001774c0: addiu $sp, $sp, -0x20
    a2 = 1;                                                     // 0x001774c4: addiu $a2, $zero, 1
    func_00177808();  // 0x1777d0                                // 0x001774dc: jal 0x1777d0
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001774e8: lw $v0, 8($s1)
    a1 = 5;                                                     // 0x001774ec: addiu $a1, $zero, 5
    if (v0 == 0) goto label_0x177518;                           // 0x001774f0: beqz $v0, 0x177518
    a1 = 1;                                                     // 0x001774f8: addiu $a1, $zero, 1
    func_00177750();  // 0x177730                                // 0x001774fc: jal 0x177730
    a2 = 1;                                                     // 0x00177500: addiu $a2, $zero, 1
    func_00177650();  // 0x1775b0                                // 0x00177508: jal 0x1775b0
    goto label_0x177528;                                        // 0x00177510: b 0x177528
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x00177514: lw $v0, 0xc($s1)
label_0x177518:
    func_00175170();  // 0x175120                                // 0x00177518: jal 0x175120
    /* nop */                                                   // 0x0017751c: nop 
    *(uint32_t*)((s0) + 0xb44) = 0;                             // 0x00177520: sw $zero, 0xb44($s0)
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x00177524: lw $v0, 0xc($s1)
label_0x177528:
    if (v0 == 0) goto label_0x177550;                           // 0x00177528: beqz $v0, 0x177550
    a1 = 1;                                                     // 0x00177530: addiu $a1, $zero, 1
    func_00177770();  // 0x177750                                // 0x00177534: jal 0x177750
    a2 = 2;                                                     // 0x00177538: addiu $a2, $zero, 2
    func_001776f0();  // 0x177650                                // 0x00177540: jal 0x177650
    goto label_0x177564;                                        // 0x00177548: b 0x177564
    v0 = *(int32_t*)((s1) + 0x20);                              // 0x0017754c: lw $v0, 0x20($s1)
label_0x177550:
    a1 = 6;                                                     // 0x00177550: addiu $a1, $zero, 6
    func_00175170();  // 0x175120                                // 0x00177554: jal 0x175120
    *(uint32_t*)((s0) + 0xb48) = 0;                             // 0x0017755c: sw $zero, 0xb48($s0)
    v0 = *(int32_t*)((s1) + 0x20);                              // 0x00177560: lw $v0, 0x20($s1)
label_0x177564:
    if (v0 == 0) goto label_0x177598;                           // 0x00177564: beqz $v0, 0x177598
    a1 = 1;                                                     // 0x0017756c: addiu $a1, $zero, 1
    func_001777d0();  // 0x177770                                // 0x00177570: jal 0x177770
    a2 = 7;                                                     // 0x00177574: addiu $a2, $zero, 7
    return func_00177710();  // Tail call                        // 0x0017758c: j 0x1776f0
    sp = sp + 0x20;                                             // 0x00177590: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00177594: nop 
label_0x177598:
    return;                                                     // 0x001775a4: jr $ra
    sp = sp + 0x20;                                             // 0x001775a8: addiu $sp, $sp, 0x20
}