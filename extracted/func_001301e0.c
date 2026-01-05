void func_001301e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001301e0: addiu $sp, $sp, -0x10
    func_001303a0();  // 1303a0                                // 0x001301ec: jal 0x1303a0
    func_00141390();  // 141390                                // 0x001301f4: jal 0x141390
    /* nop */                                                   // 0x001301f8: nop 
    v1 = *(int8_t*)((s0) + 0x45);                               // 0x001301fc: lb $v1, 0x45($s0)
    v0 = 1;                                                     // 0x00130200: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x13020c;                          // 0x00130204: beql $v1, $v0, 0x13020c
    *(uint8_t*)((s0) + 0x42) = v1;                              // 0x00130208: sb $v1, 0x42($s0)
label_0x13020c:
    *(uint8_t*)((s0) + 0x41) = 0;                               // 0x0013020c: sb $zero, 0x41($s0)
    return func_001413c0();  // Tail call                        // 0x00130218: j 0x1413a8
    sp = sp + 0x10;                                             // 0x0013021c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00130220: addiu $sp, $sp, -0x10
    func_00130408();  // 130408                                // 0x0013022c: jal 0x130408
    func_001301e0();  // 1301e0                                // 0x00130234: jal 0x1301e0
    v0 = *(int8_t*)((s0) + 0x45);                               // 0x0013023c: lb $v0, 0x45($s0)
    /* beqzl $v0, 0x130260 */                                   // 0x00130240: beqzl $v0, 0x130260
label_0x130248:
    func_00129ce0();  // 129ce0                                // 0x00130248: jal 0x129ce0
    /* nop */                                                   // 0x0013024c: nop 
    v0 = *(int8_t*)((s0) + 0x45);                               // 0x00130250: lb $v0, 0x45($s0)
    if (v0 != 0) goto label_0x130248;                           // 0x00130254: bnez $v0, 0x130248
    /* nop */                                                   // 0x00130258: nop 
    return;                                                     // 0x00130264: jr $ra
    sp = sp + 0x10;                                             // 0x00130268: addiu $sp, $sp, 0x10
}