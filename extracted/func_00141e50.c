void func_00141e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x00141e50: lui $v0, 0x25
    sp = sp + -0x10;                                            // 0x00141e54: addiu $sp, $sp, -0x10
    v0 = g_00256178;  // Global at 0x00256178                   // 0x00141e58: lw $v0, 0x6178($v0)
    if (v0 == 0) goto label_0x141e80;                           // 0x00141e64: beqz $v0, 0x141e80
    /* call function at address in v0 */                        // 0x00141e6c: jalr $v0
    /* nop */                                                   // 0x00141e70: nop 
    goto label_0x141ea0;                                        // 0x00141e74: b 0x141ea0
    /* nop */                                                   // 0x00141e7c: nop 
label_0x141e80:
    func_001413a8();  // 0x141390                                // 0x00141e80: jal 0x141390
    /* nop */                                                   // 0x00141e84: nop 
    v1 = 1;                                                     // 0x00141e88: addiu $v1, $zero, 1
    v0 = *(int32_t*)(s0);                                       // 0x00141e8c: lw $v0, 0($s0)
    *(uint32_t*)(s0) = v1;                                      // 0x00141e90: sw $v1, 0($s0)
    v0 = v0 ^ 1;                                                // 0x00141e94: xori $v0, $v0, 1
    func_001413c0();  // 0x1413a8                                // 0x00141e98: jal 0x1413a8
    s0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00141e9c: sltu $s0, $zero, $v0
label_0x141ea0:
    return;                                                     // 0x00141eac: jr $ra
    sp = sp + 0x10;                                             // 0x00141eb0: addiu $sp, $sp, 0x10
}