void func_00136238() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x60;                                            // 0x00136238: addiu $sp, $sp, -0x60
    func_0010af38();  // 0x10ae00                                // 0x00136264: jal 0x10ae00
    v0 = 0x25 << 16;                                            // 0x00136270: lui $v0, 0x25
    s3 = v0 + 0x37ec;                                           // 0x00136274: addiu $s3, $v0, 0x37ec
    s6 = s3 + -4;                                               // 0x00136278: addiu $s6, $s3, -4
    s0 = s1 << 4;                                               // 0x0013627c: sll $s0, $s1, 4
label_0x136280:
    s1 = s1 + 1;                                                // 0x00136280: addiu $s1, $s1, 1
    a1 = s0 + s3;                                               // 0x00136288: addu $a1, $s0, $s3
    func_0010b2a0();  // 0x10b0e8                                // 0x00136290: jal 0x10b0e8
    s0 = s0 + s6;                                               // 0x00136294: addu $s0, $s0, $s6
    if (v0 != 0) goto label_0x136310;                           // 0x00136298: bnez $v0, 0x136310
    func_00136ca8();  // 0x136c58                                // 0x001362a0: jal 0x136c58
    s0 = *(int32_t*)(s0);                                       // 0x001362a4: lw $s0, 0($s0)
    if (v0 == 0) goto label_0x1362e8;                           // 0x001362a8: beqz $v0, 0x1362e8
    /* nop */                                                   // 0x001362ac: nop 
    if (s0 == 0) goto label_0x136314;                           // 0x001362b0: beqz $s0, 0x136314
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x001362b4: slti $v0, $s1, 0x20
    v0 = *(int32_t*)((s0) + 0x60);                              // 0x001362b8: lw $v0, 0x60($s0)
    if (v0 == 0) goto label_0x136314;                           // 0x001362bc: beqz $v0, 0x136314
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x001362c0: slti $v0, $s1, 0x20
    local_4 = s2;                                               // 0x001362c4: sw $s2, 4($sp)
    a1 = 4;                                                     // 0x001362cc: addiu $a1, $zero, 4
    v0 = *(int32_t*)((s0) + 0x60);                              // 0x001362d4: lw $v0, 0x60($s0)
    /* call function at address in v0 */                        // 0x001362d8: jalr $v0
    goto label_0x13631c;                                        // 0x001362e0: b 0x13631c
label_0x1362e8:
    if (s0 == 0) goto label_0x136314;                           // 0x001362e8: beqz $s0, 0x136314
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x001362ec: slti $v0, $s1, 0x20
    s0 = *(int32_t*)((s0) + 0x44);                              // 0x001362f0: lw $s0, 0x44($s0)
    if (s0 == 0) goto label_0x136314;                           // 0x001362f4: beqz $s0, 0x136314
    /* nop */                                                   // 0x001362f8: nop 
    /* call function at address in s0 */                        // 0x001362fc: jalr $s0
    /* nop */                                                   // 0x00136300: nop 
    goto label_0x13631c;                                        // 0x00136304: b 0x13631c
    /* nop */                                                   // 0x0013630c: nop 
label_0x136310:
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x00136310: slti $v0, $s1, 0x20
label_0x136314:
    if (v0 != 0) goto label_0x136280;                           // 0x00136314: bnez $v0, 0x136280
    s0 = s1 << 4;                                               // 0x00136318: sll $s0, $s1, 4
label_0x13631c:
    return;                                                     // 0x00136340: jr $ra
    sp = sp + 0x60;                                             // 0x00136344: addiu $sp, $sp, 0x60
}