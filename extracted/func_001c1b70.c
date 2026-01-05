void func_001c1b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c1b70: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001c1b74: lui $at, 0x31
    v1 = g_00313874;  // Global at 0x00313874                   // 0x001c1b7c: lw $v1, 0x3874($at)
    if (v1 != 0) goto label_0x1c1b90;                           // 0x001c1b80: bnez $v1, 0x1c1b90
    v0 = a0 << 5;                                               // 0x001c1b84: sll $v0, $a0, 5
    goto label_0x1c1bb4;                                        // 0x001c1b88: b 0x1c1bb4
label_0x1c1b90:
    a1 = 0x31 << 16;                                            // 0x001c1b90: lui $a1, 0x31
    v0 = v0 + a0;                                               // 0x001c1b94: addu $v0, $v0, $a0
    a1 = a1 + 0x62d0;                                           // 0x001c1b98: addiu $a1, $a1, 0x62d0
    v0 = v0 << 3;                                               // 0x001c1b9c: sll $v0, $v0, 3
    v0 = v1 + v0;                                               // 0x001c1ba0: addu $v0, $v1, $v0
    func_001c15a0();  // 1c15a0                                // 0x001c1ba4: jal 0x1c15a0
    a0 = v0 + 0x18;                                             // 0x001c1ba8: addiu $a0, $v0, 0x18
    v0 = 0x31 << 16;                                            // 0x001c1bac: lui $v0, 0x31
    v0 = v0 + 0x62d0;                                           // 0x001c1bb0: addiu $v0, $v0, 0x62d0
label_0x1c1bb4:
    return;                                                     // 0x001c1bb8: jr $ra
    sp = sp + 0x10;                                             // 0x001c1bbc: addiu $sp, $sp, 0x10
}