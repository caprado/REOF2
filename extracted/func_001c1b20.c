void func_001c1b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c1b20: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001c1b24: lui $at, 0x31
    v1 = g_00313874;  // Global at 0x00313874                   // 0x001c1b2c: lw $v1, 0x3874($at)
    if (v1 != 0) goto label_0x1c1b40;                           // 0x001c1b30: bnez $v1, 0x1c1b40
    v0 = a0 << 5;                                               // 0x001c1b34: sll $v0, $a0, 5
    goto label_0x1c1b64;                                        // 0x001c1b38: b 0x1c1b64
label_0x1c1b40:
    a1 = 0x31 << 16;                                            // 0x001c1b40: lui $a1, 0x31
    v0 = v0 + a0;                                               // 0x001c1b44: addu $v0, $v0, $a0
    a1 = a1 + 0x62d0;                                           // 0x001c1b48: addiu $a1, $a1, 0x62d0
    v0 = v0 << 3;                                               // 0x001c1b4c: sll $v0, $v0, 3
    v0 = v1 + v0;                                               // 0x001c1b50: addu $v0, $v1, $v0
    func_001c15a0();  // 1c15a0                                // 0x001c1b54: jal 0x1c15a0
    a0 = v0 + 4;                                                // 0x001c1b58: addiu $a0, $v0, 4
    v0 = 0x31 << 16;                                            // 0x001c1b5c: lui $v0, 0x31
    v0 = v0 + 0x62d0;                                           // 0x001c1b60: addiu $v0, $v0, 0x62d0
label_0x1c1b64:
    return;                                                     // 0x001c1b68: jr $ra
    sp = sp + 0x10;                                             // 0x001c1b6c: addiu $sp, $sp, 0x10
}