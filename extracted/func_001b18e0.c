void func_001b18e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001b18e0();  // Tail call                        // 0x001b18e4: j 0x1b1870
    a2 = 0x640;                                                 // 0x001b18e8: addiu $a2, $zero, 0x640
    /* nop */                                                   // 0x001b18ec: nop 
    sp = sp + -0x20;                                            // 0x001b18f0: addiu $sp, $sp, -0x20
    a2 = 0x7d0;                                                 // 0x001b18fc: addiu $a2, $zero, 0x7d0
    func_001b18e0();  // 0x1b1870                                // 0x001b1908: jal 0x1b1870
    a0 = s0 + 4;                                                // 0x001b190c: addiu $a0, $s0, 4
    a0 = s0 + 0xfa4;                                            // 0x001b1910: addiu $a0, $s0, 0xfa4
    func_00107d30();  // 0x107c70                                // 0x001b1918: jal 0x107c70
    a2 = 0xfa0;                                                 // 0x001b191c: addiu $a2, $zero, 0xfa0
    *(uint16_t*)((s0) + 0x1f46) = 0;                            // 0x001b1920: sh $zero, 0x1f46($s0)
    v1 = 0 & 0xffff;                                            // 0x001b1924: andi $v1, $zero, 0xffff
    *(uint16_t*)((s0) + 0x1f44) = 0;                            // 0x001b1928: sh $zero, 0x1f44($s0)
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x001b192c: sb $v1, 1($s0)
    *(uint8_t*)(s0) = v1;                                       // 0x001b1930: sb $v1, 0($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1938: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b193c: jr $ra
    sp = sp + 0x20;                                             // 0x001b1940: addiu $sp, $sp, 0x20
}