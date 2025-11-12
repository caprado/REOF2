void func_0012cff8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_4;
    
    sp = sp + -0x80;                                            // 0x0012cff8: addiu $sp, $sp, -0x80
    s4 = s2 + 0xc;                                              // 0x0012d010: addiu $s4, $s2, 0xc
    s5 = s2 + 0x1c;                                             // 0x0012d018: addiu $s5, $s2, 0x1c
    s7 = *(int32_t*)((s2) + 4);                                 // 0x0012d034: lw $s7, 4($s2)
    s1 = *(int32_t*)((s2) + 8);                                 // 0x0012d038: lw $s1, 8($s2)
    func_00124c08();  // 0x124bb8                                // 0x0012d03c: jal 0x124bb8
    func_00124f80();  // 0x124f78                                // 0x0012d048: jal 0x124f78
    func_00124f90();  // 0x124f80                                // 0x0012d054: jal 0x124f80
    local_20 = v0;                                              // 0x0012d058: sw $v0, 0x20($sp)
    a0 = s2 + 0x14;                                             // 0x0012d05c: addiu $a0, $s2, 0x14
    v0 = *(int32_t*)((s2) + 0x34);                              // 0x0012d064: lw $v0, 0x34($s2)
    fp = sp + 0x10;                                             // 0x0012d068: addiu $fp, $sp, 0x10
    a1 = local_20;                                              // 0x0012d06c: lw $a1, 0x20($sp)
    s0 = s0 - v0;                                               // 0x0012d070: subu $s0, $s0, $v0
    v0 = (s3 < s0) ? 1 : 0;                                     // 0x0012d078: slt $v0, $s3, $s0
    func_00140598();  // 0x1404a0                                // 0x0012d080: jal 0x1404a0
    if (v0 == 0) s3 = s0;                                       // 0x0012d084: movz $s3, $s0, $v0
    v1 = *(int32_t*)(s1);                                       // 0x0012d088: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012d094: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012d098: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x0012d0a0: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0012d0a8: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012d0ac: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012d0b0: jalr $v0
    goto label_0x12d120;                                        // 0x0012d0b8: b 0x12d120
    /* nop */                                                   // 0x0012d0bc: nop 
label_0x12d0c0:
    func_00140598();  // 0x1404a0                                // 0x0012d0c0: jal 0x1404a0
    /* nop */                                                   // 0x0012d0c4: nop 
    v0 = *(int32_t*)((s2) + 0x50);                              // 0x0012d0c8: lw $v0, 0x50($s2)
    if (v0 == 0) goto label_0x12d0e8;                           // 0x0012d0d0: beqz $v0, 0x12d0e8
    s6 = s6 + 1;                                                // 0x0012d0d4: addiu $s6, $s6, 1
    a0 = *(int32_t*)((s2) + 0x54);                              // 0x0012d0d8: lw $a0, 0x54($s2)
    a2 = local_0;                                               // 0x0012d0dc: lw $a2, 0($sp)
    /* call function at address in v0 */                        // 0x0012d0e0: jalr $v0
    a3 = local_4;                                               // 0x0012d0e4: lw $a3, 4($sp)
label_0x12d0e8:
    a0 = *(int32_t*)(s4);                                       // 0x0012d0e8: lw $a0, 0($s4)
    a1 = 1;                                                     // 0x0012d0f0: addiu $a1, $zero, 1
    v1 = *(int32_t*)(a0);                                       // 0x0012d0f4: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012d0f8: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012d0fc: jalr $v0
    s5 = s5 + 8;                                                // 0x0012d100: addiu $s5, $s5, 8
    a0 = *(int32_t*)(s4);                                       // 0x0012d104: lw $a0, 0($s4)
    v1 = *(int32_t*)(a0);                                       // 0x0012d110: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012d114: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012d118: jalr $v0
    s4 = s4 + 4;                                                // 0x0012d11c: addiu $s4, $s4, 4
label_0x12d120:
    func_00124bb8();  // 0x124b38                                // 0x0012d120: jal 0x124b38
    a0 = *(int32_t*)((s2) + 4);                                 // 0x0012d124: lw $a0, 4($s2)
    v0 = (s6 < v0) ? 1 : 0;                                     // 0x0012d12c: slt $v0, $s6, $v0
    a1 = s3 << 1;                                               // 0x0012d130: sll $a1, $s3, 1
    if (v0 != 0) goto label_0x12d0c0;                           // 0x0012d138: bnez $v0, 0x12d0c0
    v1 = *(int32_t*)((s2) + 0x2c);                              // 0x0012d140: lw $v1, 0x2c($s2)
    v0 = local_20;                                              // 0x0012d148: lw $v0, 0x20($sp)
    v1 = v1 + s3;                                               // 0x0012d14c: addu $v1, $v1, $s3
    a1 = *(int32_t*)((s2) + 0x30);                              // 0x0012d150: lw $a1, 0x30($s2)
    *(uint32_t*)((s2) + 0x2c) = v1;                             // 0x0012d154: sw $v1, 0x2c($s2)
    a3 = *(int32_t*)((s2) + 0x34);                              // 0x0012d158: lw $a3, 0x34($s2)
    a1 = a1 + v0;                                               // 0x0012d15c: addu $a1, $a1, $v0
    v1 = local_20;                                              // 0x0012d160: lw $v1, 0x20($sp)
    a2 = *(int32_t*)((s2) + 0x40);                              // 0x0012d164: lw $a2, 0x40($s2)
    a3 = a3 + s3;                                               // 0x0012d168: addu $a3, $a3, $s3
    v0 = *(int32_t*)((s2) + 0x44);                              // 0x0012d16c: lw $v0, 0x44($s2)
    a2 = a2 + s3;                                               // 0x0012d170: addu $a2, $a2, $s3
    *(uint32_t*)((s2) + 0x30) = a1;                             // 0x0012d174: sw $a1, 0x30($s2)
    v0 = v0 + v1;                                               // 0x0012d178: addu $v0, $v0, $v1
    *(uint32_t*)((s2) + 0x34) = a3;                             // 0x0012d17c: sw $a3, 0x34($s2)
    *(uint32_t*)((s2) + 0x44) = v0;                             // 0x0012d180: sw $v0, 0x44($s2)
    func_00124f78();  // 0x124f38                                // 0x0012d184: jal 0x124f38
    *(uint32_t*)((s2) + 0x40) = a2;                             // 0x0012d188: sw $a2, 0x40($s2)
    return;                                                     // 0x0012d1b4: jr $ra
    sp = sp + 0x80;                                             // 0x0012d1b8: addiu $sp, $sp, 0x80
}