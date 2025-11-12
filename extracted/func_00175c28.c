void func_00175c28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00175c28: addiu $sp, $sp, -0x30
    v0 = 0x21 << 16;                                            // 0x00175c2c: lui $v0, 0x21
    a1 = 0x47;                                                  // 0x00175c38: addiu $a1, $zero, 0x47
    s3 = v0 + 0x5738;                                           // 0x00175c4c: addiu $s3, $v0, 0x5738
    func_001752f8();  // 0x1752e8                                // 0x00175c54: jal 0x1752e8
    v1 = 1;                                                     // 0x00175c5c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x175c88;                          // 0x00175c60: bne $v0, $v1, 0x175c88
    /* nop */                                                   // 0x00175c64: nop 
    v0 = *(int32_t*)((s0) + 0x28c);                             // 0x00175c68: lw $v0, 0x28c($s0)
    v1 = *(int32_t*)((s0) + 0x264);                             // 0x00175c6c: lw $v1, 0x264($s0)
    v1 = v1 - v0;                                               // 0x00175c70: subu $v1, $v1, $v0
    *(uint32_t*)(s1) = v1;                                      // 0x00175c74: sw $v1, 0($s1)
    v0 = g_00215740;  // Global at 0x00215740                   // 0x00175c78: lw $v0, 8($s3)
    goto label_0x175ca0;                                        // 0x00175c7c: b 0x175ca0
    *(uint32_t*)(s2) = v0;                                      // 0x00175c80: sw $v0, 0($s2)
    /* nop */                                                   // 0x00175c84: nop 
label_0x175c88:
    v0 = *(int32_t*)((s0) + 0x298);                             // 0x00175c88: lw $v0, 0x298($s0)
    v1 = *(int32_t*)((s0) + 0x28c);                             // 0x00175c8c: lw $v1, 0x28c($s0)
    v0 = v0 - v1;                                               // 0x00175c90: subu $v0, $v0, $v1
    *(uint32_t*)(s1) = v0;                                      // 0x00175c94: sw $v0, 0($s1)
    v1 = *(int32_t*)((s0) + 0x29c);                             // 0x00175c98: lw $v1, 0x29c($s0)
    *(uint32_t*)(s2) = v1;                                      // 0x00175c9c: sw $v1, 0($s2)
label_0x175ca0:
    return;                                                     // 0x00175cb4: jr $ra
    sp = sp + 0x30;                                             // 0x00175cb8: addiu $sp, $sp, 0x30
}