void func_001c6b00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c6b00: addiu $sp, $sp, -0x50
    v1 = 2;                                                     // 0x001c6b04: addiu $v1, $zero, 2
    at = 0 | 0x84d0;                                            // 0x001c6b0c: ori $at, $zero, 0x84d0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c6b10: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c6b1c: addu.qb $zero, $sp, $s1
    s2 = *(int32_t*)((a0) + 0xe8);                              // 0x001c6b24: lw $s2, 0xe8($a0)
    a0 = *(int32_t*)((a0) + 0xf8);                              // 0x001c6b28: lw $a0, 0xf8($a0)
    s1 = s2 + 0x2030;                                           // 0x001c6b2c: addiu $s1, $s2, 0x2030
    if (a0 == v1) goto label_0x1c6ba0;                          // 0x001c6b30: beq $a0, $v1, 0x1c6ba0
    s0 = s1 + at;                                               // 0x001c6b34: addu $s0, $s1, $at
    v1 = 1;                                                     // 0x001c6b38: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1c6b80;                          // 0x001c6b3c: beq $a0, $v1, 0x1c6b80
    /* nop */                                                   // 0x001c6b40: nop 
    if (a0 == 0) goto label_0x1c6b54;                           // 0x001c6b44: beqz $a0, 0x1c6b54
    /* nop */                                                   // 0x001c6b48: nop 
    goto label_0x1c6bc0;                                        // 0x001c6b4c: b 0x1c6bc0
label_0x1c6b54:
    func_001c6960();  // 0x1c6860                                // 0x001c6b54: jal 0x1c6860
    a0 = s2 + 0x10;                                             // 0x001c6b58: addiu $a0, $s2, 0x10
    a1 = *(int32_t*)((s3) + 0x20);                              // 0x001c6b5c: lw $a1, 0x20($s3)
    func_001c6af0();  // 0x1c6ab0                                // 0x001c6b60: jal 0x1c6ab0
    a0 = s2 + 0x30;                                             // 0x001c6b64: addiu $a0, $s2, 0x30
    a2 = *(int32_t*)((s3) + 0x20);                              // 0x001c6b68: lw $a2, 0x20($s3)
    func_001c7170();  // 0x1c7050                                // 0x001c6b70: jal 0x1c7050
    a1 = 0x2030;                                                // 0x001c6b74: addiu $a1, $zero, 0x2030
    goto label_0x1c6bbc;                                        // 0x001c6b78: b 0x1c6bbc
    /* nop */                                                   // 0x001c6b7c: nop 
label_0x1c6b80:
    func_001c69d0();  // 0x1c6960                                // 0x001c6b80: jal 0x1c6960
    a2 = *(int32_t*)((s3) + 0x20);                              // 0x001c6b88: lw $a2, 0x20($s3)
    func_001c7170();  // 0x1c7050                                // 0x001c6b90: jal 0x1c7050
    a1 = 0 | 0x84d0;                                            // 0x001c6b94: ori $a1, $zero, 0x84d0
    goto label_0x1c6bbc;                                        // 0x001c6b98: b 0x1c6bbc
    /* nop */                                                   // 0x001c6b9c: nop 
label_0x1c6ba0:
    func_001c6ab0();  // 0x1c6a10                                // 0x001c6ba0: jal 0x1c6a10
    a2 = *(int32_t*)((s3) + 0x20);                              // 0x001c6ba8: lw $a2, 0x20($s3)
    v0 = 1 << 16;                                               // 0x001c6bac: lui $v0, 1
    func_001c7170();  // 0x1c7050                                // 0x001c6bb4: jal 0x1c7050
    a1 = v0 | 0x50;                                             // 0x001c6bb8: ori $a1, $v0, 0x50
label_0x1c6bbc:
label_0x1c6bc0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c6bc4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c6bc8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6bcc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6bd0: jr $ra
    sp = sp + 0x50;                                             // 0x001c6bd4: addiu $sp, $sp, 0x50
}