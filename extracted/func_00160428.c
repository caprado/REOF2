void func_00160428() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00160428: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0016043c: jal 0x15fc80
    if (v0 != 0) goto label_0x160468;                           // 0x00160444: bnez $v0, 0x160468
    a0 = 0x23 << 16;                                            // 0x0016044c: lui $a0, 0x23
    a0 = &str_00228030;  // "E1122624: mwPlyGetInputSj: handle is invalid." // 0x00160458: addiu $a0, $a0, -0x7fd0
    return func_001634a8();  // Tail call                        // 0x00160460: j 0x163410
    sp = sp + 0x20;                                             // 0x00160464: addiu $sp, $sp, 0x20
label_0x160468:
    func_0015f7e0();  // 15f7e0                                // 0x00160468: jal 0x15f7e0
    /* nop */                                                   // 0x0016046c: nop 
    a2 = s1 ^ 1;                                                // 0x00160470: xori $a2, $s1, 1
    a1 = 7;                                                     // 0x00160478: addiu $a1, $zero, 7
    a2 = ((unsigned)0 < (unsigned)a2) ? 1 : 0;                  // 0x00160488: sltu $a2, $zero, $a2
    return func_001750b0();  // Tail call                        // 0x0016048c: j 0x174ff8
    sp = sp + 0x20;                                             // 0x00160490: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00160494: nop 
    sp = sp + -0x10;                                            // 0x00160498: addiu $sp, $sp, -0x10
    func_0015fc80();  // 15fc80                                // 0x001604a4: jal 0x15fc80
    /* bnezl $v0, 0x1604c4 */                                   // 0x001604ac: bnezl $v0, 0x1604c4
    v0 = *(int32_t*)((s0) + 0x12c);                             // 0x001604b0: lw $v0, 0x12c($s0)
    a0 = 0x23 << 16;                                            // 0x001604b4: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x001604b8: jal 0x163410
    a0 = &str_00228068;  // "E202191: mwPlyGetPlyInf: handle is invalid." // 0x001604bc: addiu $a0, $a0, -0x7f98
    return;                                                     // 0x001604cc: jr $ra
    sp = sp + 0x10;                                             // 0x001604d0: addiu $sp, $sp, 0x10
}