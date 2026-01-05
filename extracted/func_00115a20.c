void func_00115a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00115a20: addiu $sp, $sp, -0x60
    if (s2 <= 0) goto label_0x115acc;                           // 0x00115a44: blez $s2, 0x115acc
    s3 = 0x25 << 16;                                            // 0x00115a4c: lui $s3, 0x25
    v0 = 0x25 << 16;                                            // 0x00115a50: lui $v0, 0x25
    /* nop */                                                   // 0x00115a54: nop 
label_0x115a58:
    s1 = v1 + 1;                                                // 0x00115a58: addiu $s1, $v1, 1
    a0 = g_0024c328;  // Global at 0x0024c328                   // 0x00115a5c: lw $a0, -0x3cd8($v0)
    s0 = s4 + v1;                                               // 0x00115a60: addu $s0, $s4, $v1
    /* nop */                                                   // 0x00115a64: nop 
label_0x115a68:
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00115a68: lw $v0, 4($a0)
    /* nop */                                                   // 0x00115a6c: nop 
    /* nop */                                                   // 0x00115a70: nop 
    /* nop */                                                   // 0x00115a74: nop 
    /* nop */                                                   // 0x00115a78: nop 
    if (v0 == 0) goto label_0x115a68;                           // 0x00115a7c: beqz $v0, 0x115a68
    /* nop */                                                   // 0x00115a80: nop 
    a1 = s3 + -0x3cf0;                                          // 0x00115a84: addiu $a1, $s3, -0x3cf0
    v0 = g_0024c328;  // Global at 0x0024c328                   // 0x00115a88: lw $v0, 0x18($a1)
    v1 = g_00250008;  // Global at 0x00250008                   // 0x00115a8c: lw $v1, 8($v0)
    a0 = *(uint8_t*)(v1);                                       // 0x00115a90: lbu $a0, 0($v1)
    *(uint8_t*)(s0) = a0;                                       // 0x00115a94: sb $a0, 0($s0)
    func_001156d0();  // 1156d0                                // 0x00115a98: jal 0x1156d0
    a0 = g_0024c328;  // Global at 0x0024c328                   // 0x00115a9c: lw $a0, 0x18($a1)
    v1 = *(int8_t*)(s0);                                        // 0x00115aa0: lb $v1, 0($s0)
    v0 = 0xa;                                                   // 0x00115aa4: addiu $v0, $zero, 0xa
    if (v1 == v0) goto label_0x115ab8;                          // 0x00115aa8: beq $v1, $v0, 0x115ab8
    v0 = 0xd;                                                   // 0x00115aac: addiu $v0, $zero, 0xd
    if (v1 != v0) goto label_0x115ac0;                          // 0x00115ab0: bne $v1, $v0, 0x115ac0
label_0x115ab8:
    goto label_0x115ad0;                                        // 0x00115ab8: b 0x115ad0
label_0x115ac0:
    v0 = (v1 < s2) ? 1 : 0;                                     // 0x00115ac0: slt $v0, $v1, $s2
    if (v0 != 0) goto label_0x115a58;                           // 0x00115ac4: bnez $v0, 0x115a58
    v0 = 0x25 << 16;                                            // 0x00115ac8: lui $v0, 0x25
label_0x115acc:
label_0x115ad0:
    return;                                                     // 0x00115ae8: jr $ra
    sp = sp + 0x60;                                             // 0x00115aec: addiu $sp, $sp, 0x60
}