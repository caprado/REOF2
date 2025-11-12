void func_0016b1f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_8, local_c;
    
    sp = sp + -0x60;                                            // 0x0016b1f8: addiu $sp, $sp, -0x60
    s3 = *(int32_t*)((a0) + 0x1aec);                            // 0x0016b230: lw $s3, 0x1aec($a0)
    s4 = *(int32_t*)(s3);                                       // 0x0016b234: lw $s4, 0($s3)
label_0x16b238:
    s0 = s0 + 1;                                                // 0x0016b23c: addiu $s0, $s0, 1
    func_00157bb0();  // 0x157b00                                // 0x0016b244: jal 0x157b00
    a2 = (s0 < 3) ? 1 : 0;                                      // 0x0016b24c: slti $a2, $s0, 3
    a0 = local_8;                                               // 0x0016b250: lw $a0, 8($sp)
    a1 = local_c;                                               // 0x0016b254: lw $a1, 0xc($sp)
    v0 = (a0 < s2) ? 1 : 0;                                     // 0x0016b258: slt $v0, $a0, $s2
    v1 = (a1 < s1) ? 1 : 0;                                     // 0x0016b25c: slt $v1, $a1, $s1
    if (v0 == 0) s2 = a0;                                       // 0x0016b260: movz $s2, $a0, $v0
    if (a2 != 0) goto label_0x16b238;                           // 0x0016b264: bnez $a2, 0x16b238
    if (v1 == 0) s1 = a1;                                       // 0x0016b268: movz $s1, $a1, $v1
    *(uint32_t*)((s3) + 4) = s1;                                // 0x0016b26c: sw $s1, 4($s3)
    *(uint32_t*)((s3) + 8) = s2;                                // 0x0016b270: sw $s2, 8($s3)
    *(uint32_t*)(s5) = s2;                                      // 0x0016b274: sw $s2, 0($s5)
    v0 = *(int32_t*)((s3) + 4);                                 // 0x0016b27c: lw $v0, 4($s3)
    *(uint32_t*)(s6) = v0;                                      // 0x0016b284: sw $v0, 0($s6)
    return;                                                     // 0x0016b2a0: jr $ra
    sp = sp + 0x60;                                             // 0x0016b2a4: addiu $sp, $sp, 0x60
}