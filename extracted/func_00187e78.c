void func_00187e78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v1 = 0x24;                                                  // 0x00187e78: addiu $v1, $zero, 0x24
    v0 = 0x28 << 16;                                            // 0x00187e7c: lui $v0, 0x28
    sp = sp + -0x80;                                            // 0x00187e84: addiu $sp, $sp, -0x80
    v0 = v0 + -0x2fb8;                                          // 0x00187e88: addiu $v0, $v0, -0x2fb8
    v0 = v0 + 4;                                                // 0x00187e94: addiu $v0, $v0, 4
    s1 = a0 + v0;                                               // 0x00187ea4: addu $s1, $a0, $v0
    func_00188ec0();  // 0x188dc8                                // 0x00187eb4: jal 0x188dc8
    a0 = *(int32_t*)(s1);                                       // 0x00187eb8: lw $a0, 0($s1)
    v1 = 3;                                                     // 0x00187ebc: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x187f3c;                          // 0x00187ec0: beq $v0, $v1, 0x187f3c
    s3 = 0x28 << 16;                                            // 0x00187ec4: lui $s3, 0x28
    v1 = 0x2080;                                                // 0x00187ec8: addiu $v1, $zero, 0x2080
    v0 = s3 + -0x2f40;                                          // 0x00187ecc: addiu $v0, $s3, -0x2f40
    a0 = 0x28 << 16;                                            // 0x00187ed0: lui $a0, 0x28
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x00187ed4: sw $zero, 0x18($v0)
    a0 = a0 + -0xec0;                                           // 0x00187ed8: addiu $a0, $a0, -0xec0
    local_0 = v1;                                               // 0x00187edc: sw $v1, 0($sp)
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x00187ee4: sw $zero, 0x14($v0)
    func_00107d30();  // 0x107c70                                // 0x00187ee8: jal 0x107c70
    a2 = 0x100;                                                 // 0x00187eec: addiu $a2, $zero, 0x100
    s0 = 0x21 << 16;                                            // 0x00187ef0: lui $s0, 0x21
    v0 = 0xa;                                                   // 0x00187ef4: addiu $v0, $zero, 0xa
    s4 = 0x18 << 16;                                            // 0x00187ef8: lui $s4, 0x18
    g_00216324 = v0;  // Global at 0x00216324                   // 0x00187efc: sw $v0, 0x6324($s0)
    s2 = 1;                                                     // 0x00187f00: addiu $s2, $zero, 1
    a0 = *(int32_t*)(s1);                                       // 0x00187f04: lw $a0, 0($s1)
label_0x187f08:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x00187f0c: lw $a1, 0x6324($s0)
    a3 = s3 + -0x2f40;                                          // 0x00187f10: addiu $a3, $s3, -0x2f40
    func_001895d8();  // 0x189470                                // 0x00187f14: jal 0x189470
    t0 = s4 + 0x7700;                                           // 0x00187f18: addiu $t0, $s4, 0x7700
    if (v0 != s2) goto label_0x187f08;                          // 0x00187f1c: bnel $v0, $s2, 0x187f08
    a0 = *(int32_t*)(s1);                                       // 0x00187f20: lw $a0, 0($s1)
    func_001876a8();  // 0x1875d8                                // 0x00187f24: jal 0x1875d8
    /* nop */                                                   // 0x00187f28: nop 
    v0 = *(int32_t*)((v1) + 8);                                 // 0x00187f30: lw $v0, 8($v1)
    if (v0 != 0) goto label_0x187f44;                           // 0x00187f34: bnez $v0, 0x187f44
    /* nop */                                                   // 0x00187f38: nop 
label_0x187f3c:
    goto label_0x187f58;                                        // 0x00187f3c: b 0x187f58
label_0x187f44:
    v0 = *(int32_t*)((v1) + 8);                                 // 0x00187f54: lw $v0, 8($v1)
label_0x187f58:
    return;                                                     // 0x00187f74: jr $ra
    sp = sp + 0x80;                                             // 0x00187f78: addiu $sp, $sp, 0x80
}