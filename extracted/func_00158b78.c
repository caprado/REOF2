void func_00158b78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00158b78: addiu $sp, $sp, -0x20
    func_0015b470();  // 15b470                                // 0x00158b8c: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x00158b94: lui $a1, 0xff03
    if (v0 == 0) goto label_0x158bb8;                           // 0x00158b98: beqz $v0, 0x158bb8
    a1 = a1 | 0x204;                                            // 0x00158ba4: ori $a1, $a1, 0x204
    return func_00158c48();  // Tail call                        // 0x00158bb0: j 0x158bf8
    sp = sp + 0x20;                                             // 0x00158bb4: addiu $sp, $sp, 0x20
label_0x158bb8:
    a1 = *(int32_t*)((s0) + 0x234);                             // 0x00158bc8: lw $a1, 0x234($s0)
    *(uint32_t*)((s1) + 0x10) = a1;                             // 0x00158bdc: sw $a1, 0x10($s1)
    return;                                                     // 0x00158bec: jr $ra
    sp = sp + 0x20;                                             // 0x00158bf0: addiu $sp, $sp, 0x20
}