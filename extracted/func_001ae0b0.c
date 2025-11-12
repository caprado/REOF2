void func_001ae0b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ae0b0: addiu $sp, $sp, -0x20
    v0 = a0 << 1;                                               // 0x001ae0b4: sll $v0, $a0, 1
    v1 = 0x2b << 16;                                            // 0x001ae0bc: lui $v1, 0x2b
    v0 = v0 + a0;                                               // 0x001ae0c4: addu $v0, $v0, $a0
    s0 = v0 << 3;                                               // 0x001ae0c8: sll $s0, $v0, 3
    v1 = v1 + -0x57de;                                          // 0x001ae0cc: addiu $v1, $v1, -0x57de
    a1 = v1 + s0;                                               // 0x001ae0d0: addu $a1, $v1, $s0
    v0 = 1;                                                     // 0x001ae0d4: addiu $v0, $zero, 1
    *(uint8_t*)(a1) = v0;                                       // 0x001ae0d8: sb $v0, 0($a1)
    v1 = a0 << 2;                                               // 0x001ae0dc: sll $v1, $a0, 2
    v0 = 0x2b << 16;                                            // 0x001ae0e0: lui $v0, 0x2b
    v0 = v0 + -0x5788;                                          // 0x001ae0e4: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001ae0e8: addu $v0, $v0, $v1
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001ae0ec: lw $a0, 0($v0)
    func_00132ae0();  // 0x132ab0                                // 0x001ae0f0: jal 0x132ab0
    a1 = *(int8_t*)(a1);                                        // 0x001ae0f4: lb $a1, 0($a1)
    v1 = 0x2b << 16;                                            // 0x001ae0f8: lui $v1, 0x2b
    v1 = v1 + -0x57dd;                                          // 0x001ae0fc: addiu $v1, $v1, -0x57dd
    v1 = v1 + s0;                                               // 0x001ae100: addu $v1, $v1, $s0
    g_002aa823 = 0;  // Global at 0x002aa823                    // 0x001ae104: sb $zero, 0($v1)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae10c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae110: jr $ra
    sp = sp + 0x20;                                             // 0x001ae114: addiu $sp, $sp, 0x20
}