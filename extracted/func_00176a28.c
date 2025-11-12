void func_00176a28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00176a28: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x00176a2c: lui $v0, 0x21
    s0 = a0 + 0xcc0;                                            // 0x00176a34: addiu $s0, $a0, 0xcc0
    a0 = g_00215740;  // Global at 0x00215740                   // 0x00176a38: lw $a0, 0x5740($v0)
    func_0015b7b0();  // 0x15b740                                // 0x00176a40: jal 0x15b740
    /* nop */                                                   // 0x00176a44: nop 
    v1 = *(int32_t*)((s0) + 0x264);                             // 0x00176a48: lw $v1, 0x264($s0)
    v1 = v1 + v0;                                               // 0x00176a50: addu $v1, $v1, $v0
    *(uint32_t*)((s0) + 0x264) = v1;                            // 0x00176a54: sw $v1, 0x264($s0)
    a0 = *(int32_t*)((s0) + 0x288);                             // 0x00176a58: lw $a0, 0x288($s0)
    a0 = a0 + v0;                                               // 0x00176a5c: addu $a0, $a0, $v0
    *(uint32_t*)((s0) + 0x288) = a0;                            // 0x00176a60: sw $a0, 0x288($s0)
    return;                                                     // 0x00176a68: jr $ra
    sp = sp + 0x10;                                             // 0x00176a6c: addiu $sp, $sp, 0x10
}