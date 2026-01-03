void func_0019e880() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019e880: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)(a0);                                       // 0x0019e888: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x19e89c;                           // 0x0019e88c: beqz $v1, 0x19e89c
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0019e890: lw $v0, 4($a0)
    goto label_0x19e8b0;                                        // 0x0019e894: b 0x19e8b0
    *(uint32_t*)((v1) + 4) = v0;                                // 0x0019e898: sw $v0, 4($v1)
label_0x19e89c:
    if (v0 == 0) goto label_0x19e8ac;                           // 0x0019e89c: beqz $v0, 0x19e8ac
    /* nop */                                                   // 0x0019e8a0: nop 
    goto label_0x19e8b0;                                        // 0x0019e8a4: b 0x19e8b0
    *(uint32_t*)((gp) + -0x647c) = v0;                          // 0x0019e8a8: sw $v0, -0x647c($gp)
label_0x19e8ac:
    *(uint32_t*)((gp) + -0x647c) = 0;                           // 0x0019e8ac: sw $zero, -0x647c($gp)
label_0x19e8b0:
    if (v0 == 0) goto label_0x19e8bc;                           // 0x0019e8b0: beqz $v0, 0x19e8bc
    /* nop */                                                   // 0x0019e8b4: nop 
    *(uint32_t*)(v0) = v1;                                      // 0x0019e8b8: sw $v1, 0($v0)
label_0x19e8bc:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0019e8bc: lw $v0, 8($a0)
    if (v0 == 0) goto label_0x19e8d8;                           // 0x0019e8c0: beqz $v0, 0x19e8d8
    *(uint8_t*)((v0) + 0x35) = 0;                               // 0x0019e8c8: sb $zero, 0x35($v0)
    v1 = 4;                                                     // 0x0019e8cc: addiu $v1, $zero, 4
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0019e8d0: lw $v0, 8($a0)
    *(uint32_t*)(v0) = v1;                                      // 0x0019e8d4: sw $v1, 0($v0)
label_0x19e8d8:
    func_0018d9e0();  // 18d9e0                                // 0x0019e8d8: jal 0x18d9e0
    a2 = 0x1c;                                                  // 0x0019e8dc: addiu $a2, $zero, 0x1c
    v1 = *(int32_t*)((gp) + -0x6480);                           // 0x0019e8e0: lw $v1, -0x6480($gp)
    v1 = v1 + -1;                                               // 0x0019e8e4: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x6480) = v1;                          // 0x0019e8e8: sw $v1, -0x6480($gp)
    return;                                                     // 0x0019e8f0: jr $ra
    sp = sp + 0x10;                                             // 0x0019e8f4: addiu $sp, $sp, 0x10
}