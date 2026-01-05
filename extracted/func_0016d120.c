void func_0016d120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0016d120: addiu $sp, $sp, -0x30
    v0 = 0x23 << 16;                                            // 0x0016d124: lui $v0, 0x23
    v0 = v0 + -0x71d8;                                          // 0x0016d138: addiu $v0, $v0, -0x71d8
    a1 = *(int32_t*)(s0);                                       // 0x0016d13c: lw $a1, 0($s0)
    v1 = *(int32_t*)((a1) + 0xc);                               // 0x0016d140: lw $v1, 0xc($a1)
    if (v1 == v0) goto label_0x16d160;                          // 0x0016d144: beq $v1, $v0, 0x16d160
    s1 = s0 + 0xcc0;                                            // 0x0016d148: addiu $s1, $s0, 0xcc0
    v0 = 0 | 0xac44;                                            // 0x0016d14c: ori $v0, $zero, 0xac44
    local_0 = 0;                                                // 0x0016d150: sw $zero, 0($sp)
    goto label_0x16d180;                                        // 0x0016d154: b 0x16d180
    local_4 = v0;                                               // 0x0016d158: sw $v0, 4($sp)
    /* nop */                                                   // 0x0016d15c: nop 
label_0x16d160:
    func_00167c80();  // 167c80                                // 0x0016d164: jal 0x167c80
    a2 = sp + 4;                                                // 0x0016d168: addiu $a2, $sp, 4
    if (v0 != 0) goto label_0x16d184;                           // 0x0016d16c: bnez $v0, 0x16d184
    v1 = local_0;                                               // 0x0016d170: lw $v1, 0($sp)
    goto label_0x16d1b0;                                        // 0x0016d174: b 0x16d1b0
    v0 = -1;                                                    // 0x0016d178: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0016d17c: nop 
label_0x16d180:
    v1 = local_0;                                               // 0x0016d180: lw $v1, 0($sp)
label_0x16d184:
    v0 = *(int32_t*)((s1) + 0x1ac);                             // 0x0016d184: lw $v0, 0x1ac($s1)
    a1 = *(int32_t*)((s0) + 0xd00);                             // 0x0016d188: lw $a1, 0xd00($s0)
    v0 = v0 + v1;                                               // 0x0016d18c: addu $v0, $v0, $v1
    a2 = local_4;                                               // 0x0016d190: lw $a2, 4($sp)
    *(uint32_t*)((s1) + 0x1ac) = v0;                            // 0x0016d194: sw $v0, 0x1ac($s1)
    func_0015b740();  // 15b740                                // 0x0016d198: jal 0x15b740
    v1 = *(int32_t*)((s1) + 0x120);                             // 0x0016d1a0: lw $v1, 0x120($s1)
    v0 = v0 - v1;                                               // 0x0016d1a4: subu $v0, $v0, $v1
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0016d1a8: slti $a0, $v0, 0
    if (a0 != 0) v0 = 0;                                        // 0x0016d1ac: movn $v0, $zero, $a0
label_0x16d1b0:
    return;                                                     // 0x0016d1bc: jr $ra
    sp = sp + 0x30;                                             // 0x0016d1c0: addiu $sp, $sp, 0x30
}