void func_0012ec50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2;
    
    sp = sp + -0x40;                                            // 0x0012ec50: addiu $sp, $sp, -0x40
    v0 = *(int32_t*)((a0) + 0x6c);                              // 0x0012ec68: lw $v0, 0x6c($a0)
    s2 = *(int32_t*)((a0) + 0xc);                               // 0x0012ec6c: lw $s2, 0xc($a0)
    if (v0 > 0) goto label_0x12ec80;                            // 0x0012ec70: bgtz $v0, 0x12ec80
    a1 = *(int32_t*)((a0) + 0x2c);                              // 0x0012ec74: lw $a1, 0x2c($a0)
    goto label_0x12eca4;                                        // 0x0012ec78: b 0x12eca4
    s1 = *(int32_t*)((a0) + 0x50);                              // 0x0012ec7c: lw $s1, 0x50($a0)
label_0x12ec80:
    v0 = *(int32_t*)((a0) + 0x50);                              // 0x0012ec80: lw $v0, 0x50($a0)
    v0 = a1 + v0;                                               // 0x0012ec84: addu $v0, $a1, $v0
    v1 = v0 + 0x7ff;                                            // 0x0012ec88: addiu $v1, $v0, 0x7ff
    v0 = v0 + 0xffe;                                            // 0x0012ec8c: addiu $v0, $v0, 0xffe
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x0012ec90: slti $a0, $v1, 0
    if (a0 != 0) v1 = v0;                                       // 0x0012ec94: movn $v1, $v0, $a0
    v1 = v1 >> 0xb;                                             // 0x0012ec98: sra $v1, $v1, 0xb
    v1 = v1 << 0xb;                                             // 0x0012ec9c: sll $v1, $v1, 0xb
    s1 = v1 - a1;                                               // 0x0012eca0: subu $s1, $v1, $a1
label_0x12eca4:
    v1 = *(int32_t*)(s2);                                       // 0x0012eca4: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012ecb0: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0012ecb4: jalr $v0
    s0 = s1 + -4;                                               // 0x0012ecb8: addiu $s0, $s1, -4
    v1 = (v0 < s1) ? 1 : 0;                                     // 0x0012ecbc: slt $v1, $v0, $s1
    if (v1 != 0) goto label_0x12ed30;                           // 0x0012ecc0: bnez $v1, 0x12ed30
    a1 = 2;                                                     // 0x0012eccc: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012ecd0: addiu $a2, $zero, 1
    v0 = 0 | 0x8001;                                            // 0x0012ecd8: ori $v0, $zero, 0x8001
    func_0012dc10();  // 12dc10                                // 0x0012ecdc: jal 0x12dc10
    local_0 = v0;                                               // 0x0012ece0: sh $v0, 0($sp)
    a1 = 2;                                                     // 0x0012ece8: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x0012ecec: addiu $a2, $zero, 1
    func_0012dc10();  // 12dc10                                // 0x0012ecf4: jal 0x12dc10
    local_0 = s0;                                               // 0x0012ecf8: sh $s0, 0($sp)
    if (s0 <= 0) goto label_0x12ed2c;                           // 0x0012ecfc: blez $s0, 0x12ed2c
    local_2 = 0;                                                // 0x0012ed00: sb $zero, 2($sp)
    s3 = sp + 2;                                                // 0x0012ed04: addiu $s3, $sp, 2
    s0 = s1 + -4;                                               // 0x0012ed08: addiu $s0, $s1, -4
    s0 = s0 + -1;                                               // 0x0012ed0c: addiu $s0, $s0, -1
label_0x12ed10:
    a1 = 1;                                                     // 0x0012ed14: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x0012ed18: addiu $a2, $zero, 1
    func_0012dc10();  // 12dc10                                // 0x0012ed1c: jal 0x12dc10
    if (s0 != 0) goto label_0x12ed10;                           // 0x0012ed24: bnez $s0, 0x12ed10
    s0 = s0 + -1;                                               // 0x0012ed28: addiu $s0, $s0, -1
label_0x12ed2c:
label_0x12ed30:
    return;                                                     // 0x0012ed44: jr $ra
    sp = sp + 0x40;                                             // 0x0012ed48: addiu $sp, $sp, 0x40
}