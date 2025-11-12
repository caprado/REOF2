void func_001ce640() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ce640: addiu $sp, $sp, -0x20
    at = 0x32 << 16;                                            // 0x001ce644: lui $at, 0x32
    v0 = 7;                                                     // 0x001ce64c: addiu $v0, $zero, 7
    v1 = g_003257d6;  // Global at 0x003257d6                   // 0x001ce654: lbu $v1, 0x57d6($at)
    if (v1 != v0) goto label_0x1ce668;                          // 0x001ce658: bne $v1, $v0, 0x1ce668
    a0 = 0x32 << 16;                                            // 0x001ce65c: lui $a0, 0x32
    goto label_0x1ce68c;                                        // 0x001ce660: b 0x1ce68c
label_0x1ce668:
    func_001ce6d0();  // 0x1ce6c0                                // 0x001ce66c: jal 0x1ce6c0
    a0 = a0 + 0x3f30;                                           // 0x001ce670: addiu $a0, $a0, 0x3f30
    a0 = 0x32 << 16;                                            // 0x001ce674: lui $a0, 0x32
    s0 = s0 + v0;                                               // 0x001ce678: addu $s0, $s0, $v0
    func_001ce6d0();  // 0x1ce6c0                                // 0x001ce67c: jal 0x1ce6c0
    a0 = a0 + 0x4f90;                                           // 0x001ce680: addiu $a0, $a0, 0x4f90
    s0 = s0 + v0;                                               // 0x001ce684: addu $s0, $s0, $v0
label_0x1ce68c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce690: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce694: jr $ra
    sp = sp + 0x20;                                             // 0x001ce698: addiu $sp, $sp, 0x20
}