void func_001724e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001724e8: addiu $sp, $sp, -0x20
    a1 = 5;                                                     // 0x001724ec: addiu $a1, $zero, 5
    func_001752f8();  // 0x1752e8                                // 0x00172504: jal 0x1752e8
    s2 = 1;                                                     // 0x00172508: addiu $s2, $zero, 1
    if (v0 == 0) goto label_0x172538;                           // 0x00172510: beqz $v0, 0x172538
    a1 = 6;                                                     // 0x00172514: addiu $a1, $zero, 6
    func_00177938();  // 0x177908                                // 0x00172518: jal 0x177908
    /* nop */                                                   // 0x0017251c: nop 
    a1 = 6;                                                     // 0x00172524: addiu $a1, $zero, 6
    func_00177950();  // 0x177938                                // 0x00172528: jal 0x177938
    s2 = s2 | v0;                                               // 0x00172530: or $s2, $s2, $v0
label_0x172538:
    func_001752f8();  // 0x1752e8                                // 0x00172538: jal 0x1752e8
    a1 = 6;                                                     // 0x0017253c: addiu $a1, $zero, 6
    a1 = 7;                                                     // 0x00172544: addiu $a1, $zero, 7
    if (v0 == 0) goto label_0x17256c;                           // 0x00172548: beqz $v0, 0x17256c
    s1 = 1;                                                     // 0x0017254c: addiu $s1, $zero, 1
    func_00177938();  // 0x177908                                // 0x00172550: jal 0x177908
    /* nop */                                                   // 0x00172554: nop 
    a1 = 7;                                                     // 0x0017255c: addiu $a1, $zero, 7
    func_00177950();  // 0x177938                                // 0x00172560: jal 0x177938
    s1 = s1 | v0;                                               // 0x00172568: or $s1, $s1, $v0
label_0x17256c:
    if (s2 == 0) goto label_0x172580;                           // 0x0017256c: beqz $s2, 0x172580
    if (s1 != 0) goto label_0x172580;                           // 0x00172574: bnez $s1, 0x172580
    v0 = 1;                                                     // 0x00172578: addiu $v0, $zero, 1
label_0x172580:
    return;                                                     // 0x00172590: jr $ra
    sp = sp + 0x20;                                             // 0x00172594: addiu $sp, $sp, 0x20
}