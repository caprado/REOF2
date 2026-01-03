void func_0016e020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016e020: addiu $sp, $sp, -0x30
    func_00170018();  // 170018                                // 0x0016e040: jal 0x170018
    /* beqzl $s0, 0x16e11c */                                   // 0x0016e04c: beqzl $s0, 0x16e11c
    v0 = *(int32_t*)(s0);                                       // 0x0016e054: lw $v0, 0($s0)
    /* bnezl $v0, 0x16e11c */                                   // 0x0016e058: bnezl $v0, 0x16e11c
    a2 = *(int32_t*)((s2) + 4);                                 // 0x0016e060: lw $a2, 4($s2)
    a3 = 0x200;                                                 // 0x0016e064: addiu $a3, $zero, 0x200
    v1 = s0 + 0x34;                                             // 0x0016e068: addiu $v1, $s0, 0x34
    a1 = *(int32_t*)(s2);                                       // 0x0016e06c: lw $a1, 0($s2)
    v0 = (a2 < 0x201) ? 1 : 0;                                  // 0x0016e070: slti $v0, $a2, 0x201
    if (v0 == 0) a2 = a3;                                       // 0x0016e078: movz $a2, $a3, $v0
    s2 = s3 + 0xcc0;                                            // 0x0016e07c: addiu $s2, $s3, 0xcc0
    func_00155b20();  // 155b20                                // 0x0016e080: jal 0x155b20
    *(uint32_t*)((v1) + 0x200) = a2;                            // 0x0016e084: sw $a2, 0x200($v1)
    v1 = s1 << 1;                                               // 0x0016e088: sll $v1, $s1, 1
    v0 = 3 << 16;                                               // 0x0016e08c: lui $v0, 3
    v1 = v1 + s1;                                               // 0x0016e090: addu $v1, $v1, $s1
    v1 = v1 << 3;                                               // 0x0016e094: sll $v1, $v1, 3
    v0 = v0 | 0xffff;                                           // 0x0016e098: ori $v0, $v0, 0xffff
    if (s1 != v0) goto label_0x16e0b0;                          // 0x0016e09c: bne $s1, $v0, 0x16e0b0
    v1 = v1 + s1;                                               // 0x0016e0a0: addu $v1, $v1, $s1
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0016e0a4: sw $zero, 4($s0)
    goto label_0x16e0c0;                                        // 0x0016e0a8: b 0x16e0c0
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0016e0ac: sw $zero, 8($s0)
label_0x16e0b0:
    v1 = v1 << 1;                                               // 0x0016e0b0: sll $v1, $v1, 1
    v0 = 1;                                                     // 0x0016e0b4: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0016e0b8: sw $v0, 8($s0)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x0016e0bc: sw $v1, 4($s0)
label_0x16e0c0:
    v0 = 1;                                                     // 0x0016e110: addiu $v0, $zero, 1
    *(uint32_t*)(s0) = v0;                                      // 0x0016e114: sw $v0, 0($s0)
    return;                                                     // 0x0016e12c: jr $ra
    sp = sp + 0x30;                                             // 0x0016e130: addiu $sp, $sp, 0x30
}