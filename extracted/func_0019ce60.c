void func_0019ce60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x29 << 16;                                            // 0x0019ce60: lui $v1, 0x29
    goto label_0x19ce8c;                                        // 0x0019ce68: b 0x19ce8c
    v1 = v1 + -0x7380;                                          // 0x0019ce6c: addiu $v1, $v1, -0x7380
label_0x19ce70:
    v0 = v0 - a0;                                               // 0x0019ce70: subu $v0, $v0, $a0
    v0 = v0 << 3;                                               // 0x0019ce74: sll $v0, $v0, 3
    v0 = v1 + v0;                                               // 0x0019ce78: addu $v0, $v1, $v0
    v0 = *(int8_t*)((v0) + 0x34);                               // 0x0019ce7c: lb $v0, 0x34($v0)
    if (v0 == 0) goto label_0x19ce9c;                           // 0x0019ce80: beqz $v0, 0x19ce9c
    v0 = a0 + 1;                                                // 0x0019ce84: addiu $v0, $a0, 1
    a0 = a0 + 1;                                                // 0x0019ce88: addiu $a0, $a0, 1
label_0x19ce8c:
    v0 = (a0 < 0x100) ? 1 : 0;                                  // 0x0019ce8c: slti $v0, $a0, 0x100
    if (v0 != 0) goto label_0x19ce70;                           // 0x0019ce90: bnez $v0, 0x19ce70
    v0 = a0 << 3;                                               // 0x0019ce94: sll $v0, $a0, 3
    v0 = a0 + 1;                                                // 0x0019ce98: addiu $v0, $a0, 1
label_0x19ce9c:
    return;                                                     // 0x0019ce9c: jr $ra
    /* nop */                                                   // 0x0019cea0: nop 
}