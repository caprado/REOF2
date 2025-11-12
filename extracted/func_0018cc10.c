void func_0018cc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018cc10: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((gp) + -0x64ec);                           // 0x0018cc1c: lw $v0, -0x64ec($gp)
    if (v0 == 0) goto label_0x18cc98;                           // 0x0018cc20: beqz $v0, 0x18cc98
    at = 0x29 << 16;                                            // 0x0018cc24: lui $at, 0x29
    v1 = 0x80 << 16;                                            // 0x0018cc28: lui $v1, 0x80
    s0 = g_00290338;  // Global at 0x00290338                   // 0x0018cc2c: lw $s0, 0x338($at)
    v0 = 1;                                                     // 0x0018cc30: addiu $v0, $zero, 1
    at = 0x1000 << 16;                                          // 0x0018cc38: lui $at, 0x1000
    g_10003c00 = v1;  // Global at 0x10003c00                   // 0x0018cc3c: sw $v1, 0x3c00($at)
    at = 0x1200 << 16;                                          // 0x0018cc40: lui $at, 0x1200
    func_00114fa0();  // 0x114f80                                // 0x0018cc44: jal 0x114f80
    a3 = *(uint8_t*)(s0);                                       // 0x0018cc4c: lbu $a3, 0($s0)
    a1 = -0x41;                                                 // 0x0018cc50: addiu $a1, $zero, -0x41
    v0 = 0 & 1;                                                 // 0x0018cc54: andi $v0, $zero, 1
    v1 = v0 << 7;                                               // 0x0018cc5c: sll $v1, $v0, 7
    v0 = -0x81;                                                 // 0x0018cc60: addiu $v0, $zero, -0x81
    a1 = a3 & a1;                                               // 0x0018cc64: and $a1, $a3, $a1
    a1 = a1 | a2;                                               // 0x0018cc68: or $a1, $a1, $a2
    *(uint8_t*)(s0) = a1;                                       // 0x0018cc6c: sb $a1, 0($s0)
    a1 = *(uint8_t*)(s0);                                       // 0x0018cc70: lbu $a1, 0($s0)
    v0 = a1 & v0;                                               // 0x0018cc74: and $v0, $a1, $v0
    v0 = v0 | v1;                                               // 0x0018cc78: or $v0, $v0, $v1
    *(uint8_t*)(s0) = v0;                                       // 0x0018cc7c: sb $v0, 0($s0)
    a2 = *(int32_t*)((gp) + -0x64ec);                           // 0x0018cc80: lw $a2, -0x64ec($gp)
    a1 = *(int32_t*)((gp) + -0x64f0);                           // 0x0018cc84: lw $a1, -0x64f0($gp)
    func_001035d0();  // 0x103550                                // 0x0018cc88: jal 0x103550
    *(uint32_t*)((gp) + -0x64f0) = 0;                           // 0x0018cc90: sw $zero, -0x64f0($gp)
    *(uint32_t*)((gp) + -0x64ec) = 0;                           // 0x0018cc94: sw $zero, -0x64ec($gp)
label_0x18cc98:
    /* memory sync */                                           // 0x0018cc98: sync 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018cca8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018ccac: jr $ra
    sp = sp + 0x20;                                             // 0x0018ccb0: addiu $sp, $sp, 0x20
}