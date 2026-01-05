void func_0015d488() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015d488: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015d49c: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0015d4a4: lui $a0, 0x22
    if (v0 != 0) goto label_0x15d4c8;                           // 0x0015d4a8: bnez $v0, 0x15d4c8
    a0 = &str_00227470;  // "E2010801: mwPlyGetFrmSync: handle is invalid." // 0x0015d4ac: addiu $a0, $a0, 0x7470
    return func_001634a8();  // Tail call                        // 0x0015d4bc: j 0x163410
    sp = sp + 0x20;                                             // 0x0015d4c0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015d4c4: nop 
label_0x15d4c8:
    *(uint32_t*)((s0) + 0x54) = s1;                             // 0x0015d4c8: sw $s1, 0x54($s0)
    return;                                                     // 0x0015d4d8: jr $ra
    sp = sp + 0x20;                                             // 0x0015d4dc: addiu $sp, $sp, 0x20
}