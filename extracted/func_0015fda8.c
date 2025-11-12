void func_0015fda8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015fda8: addiu $sp, $sp, -0x10
    if (a1 != 0) goto label_0x15fdd0;                           // 0x0015fdb4: bnez $a1, 0x15fdd0
    a0 = *(int32_t*)((v0) + 0x40);                              // 0x0015fdb8: lw $a0, 0x40($v0)
    a1 = 0xf;                                                   // 0x0015fdc0: addiu $a1, $zero, 0xf
    return func_001750b0();  // Tail call                        // 0x0015fdc8: j 0x174ff8
    sp = sp + 0x10;                                             // 0x0015fdcc: addiu $sp, $sp, 0x10
label_0x15fdd0:
    v1 = *(int32_t*)((v0) + 0xc);                               // 0x0015fdd0: lw $v1, 0xc($v0)
    v0 = 1;                                                     // 0x0015fdd4: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x15fdf0;                          // 0x0015fdd8: bne $v1, $v0, 0x15fdf0
    a1 = 0xf;                                                   // 0x0015fde0: addiu $a1, $zero, 0xf
    a2 = 2;                                                     // 0x0015fde4: addiu $a2, $zero, 2
    return func_001750b0();  // Tail call                        // 0x0015fde8: j 0x174ff8
    sp = sp + 0x10;                                             // 0x0015fdec: addiu $sp, $sp, 0x10
label_0x15fdf0:
    a1 = 0xf;                                                   // 0x0015fdf0: addiu $a1, $zero, 0xf
    a2 = 1;                                                     // 0x0015fdf4: addiu $a2, $zero, 1
    return func_001750b0();  // Tail call                        // 0x0015fdf8: j 0x174ff8
    sp = sp + 0x10;                                             // 0x0015fdfc: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0015fe00: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x0015fe14: jal 0x15fc80
    if (v0 != 0) goto label_0x15fe40;                           // 0x0015fe1c: bnez $v0, 0x15fe40
    a0 = 0x22 << 16;                                            // 0x0015fe20: lui $a0, 0x22
    a0 = &str_00227dc0;  // "E2010802: mwPlyGetSyncMode: handle is invalid." // 0x0015fe2c: addiu $a0, $a0, 0x7dc0
    return func_001634a8();  // Tail call                        // 0x0015fe34: j 0x163410
    sp = sp + 0x20;                                             // 0x0015fe38: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015fe3c: nop 
label_0x15fe40:
    if (s0 != 0) goto label_0x15fe68;                           // 0x0015fe40: bnez $s0, 0x15fe68
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x0015fe44: lw $a0, 0x40($s1)
    a1 = 0xf;                                                   // 0x0015fe4c: addiu $a1, $zero, 0xf
    return func_001750b0();  // Tail call                        // 0x0015fe5c: j 0x174ff8
    sp = sp + 0x20;                                             // 0x0015fe60: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015fe64: nop 
label_0x15fe68:
    v1 = 1;                                                     // 0x0015fe68: addiu $v1, $zero, 1
    if (s0 != v1) goto label_0x15fe90;                          // 0x0015fe6c: bne $s0, $v1, 0x15fe90
    v0 = 2;                                                     // 0x0015fe70: addiu $v0, $zero, 2
    a1 = 0xf;                                                   // 0x0015fe78: addiu $a1, $zero, 0xf
    a2 = 1;                                                     // 0x0015fe80: addiu $a2, $zero, 1
    return func_001750b0();  // Tail call                        // 0x0015fe88: j 0x174ff8
    sp = sp + 0x20;                                             // 0x0015fe8c: addiu $sp, $sp, 0x20
label_0x15fe90:
    if (s0 != v0) goto label_0x15fed8;                          // 0x0015fe90: bne $s0, $v0, 0x15fed8
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x0015fe98: lw $v0, 0xc($s1)
    if (v0 != v1) goto label_0x15fec0;                          // 0x0015fe9c: bne $v0, $v1, 0x15fec0
    a1 = 0xf;                                                   // 0x0015fea0: addiu $a1, $zero, 0xf
    a2 = 2;                                                     // 0x0015feac: addiu $a2, $zero, 2
    return func_001750b0();  // Tail call                        // 0x0015feb4: j 0x174ff8
    sp = sp + 0x20;                                             // 0x0015feb8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015febc: nop 
label_0x15fec0:
    a2 = 1;                                                     // 0x0015fec4: addiu $a2, $zero, 1
    return func_001750b0();  // Tail call                        // 0x0015fecc: j 0x174ff8
    sp = sp + 0x20;                                             // 0x0015fed0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015fed4: nop 
label_0x15fed8:
    return;                                                     // 0x0015fee0: jr $ra
    sp = sp + 0x20;                                             // 0x0015fee4: addiu $sp, $sp, 0x20
}