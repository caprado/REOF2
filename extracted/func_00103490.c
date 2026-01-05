void func_00103490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00103490: addiu $sp, $sp, -0x40
    func_00103020();  // 103020                                // 0x001034ac: jal 0x103020
    func_00102f28();  // 102f28                                // 0x001034b8: jal 0x102f28
    v0 = 0xffff << 16;                                          // 0x001034c0: lui $v0, 0xffff
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001034c4: lw $v1, 0x10($s0)
    v0 = v0 | 0xffff;                                           // 0x001034c8: ori $v0, $v0, 0xffff
    if (v1 != v0) goto label_0x1034d4;                          // 0x001034cc: bnel $v1, $v0, 0x1034d4
    *(uint32_t*)((s0) + 0x10) = s1;                             // 0x001034d0: sw $s1, 0x10($s0)
label_0x1034d4:
    v0 = *(int32_t*)(s0);                                       // 0x001034d4: lw $v0, 0($s0)
    v1 = -0xd;                                                  // 0x001034d8: addiu $v1, $zero, -0xd
    *(uint32_t*)((s0) + 0x20) = s2;                             // 0x001034dc: sw $s2, 0x20($s0)
    v0 = v0 & v1;                                               // 0x001034e0: and $v0, $v0, $v1
    v0 = v0 | 0x109;                                            // 0x001034e8: ori $v0, $v0, 0x109
    *(uint32_t*)(s0) = v0;                                      // 0x001034f0: sw $v0, 0($s0)
    return;                                                     // 0x001034fc: jr $ra
    sp = sp + 0x40;                                             // 0x00103500: addiu $sp, $sp, 0x40
}