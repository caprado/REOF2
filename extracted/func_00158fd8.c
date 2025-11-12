void func_00158fd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00158fd8: addiu $sp, $sp, -0x20
    func_0015b498();  // 0x15b470                                // 0x00158fec: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x00158ff4: lui $a1, 0xff03
    if (v0 == 0) goto label_0x159018;                           // 0x00158ff8: beqz $v0, 0x159018
    a1 = a1 | 0x20d;                                            // 0x00159004: ori $a1, $a1, 0x20d
    return func_00158c48();  // Tail call                        // 0x00159010: j 0x158bf8
    sp = sp + 0x20;                                             // 0x00159014: addiu $sp, $sp, 0x20
label_0x159018:
    v1 = *(int32_t*)((s0) + 0x27c);                             // 0x00159018: lw $v1, 0x27c($s0)
    *(uint32_t*)(s1) = v1;                                      // 0x00159020: sw $v1, 0($s1)
    return;                                                     // 0x0015902c: jr $ra
    sp = sp + 0x20;                                             // 0x00159030: addiu $sp, $sp, 0x20
}