void func_00166748() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = t0 << 3;                                               // 0x00166748: sll $v0, $t0, 3
    sp = sp + -0x30;                                            // 0x0016674c: addiu $sp, $sp, -0x30
    v0 = v0 - t0;                                               // 0x00166750: subu $v0, $v0, $t0
    v1 = t0 << 2;                                               // 0x00166754: sll $v1, $t0, 2
    v0 = v0 << 2;                                               // 0x0016675c: sll $v0, $v0, 2
    s1 = a2 + v1;                                               // 0x00166764: addu $s1, $a2, $v1
    s2 = a3 + v1;                                               // 0x0016676c: addu $s2, $a3, $v1
    v0 = v0 + t0;                                               // 0x0016677c: addu $v0, $v0, $t0
    v0 = v0 << 2;                                               // 0x00166780: sll $v0, $v0, 2
    a0 = *(int32_t*)(s2);                                       // 0x00166784: lw $a0, 0($s2)
    s0 = a1 + v0;                                               // 0x00166788: addu $s0, $a1, $v0
    a1 = 1;                                                     // 0x0016678c: addiu $a1, $zero, 1
    a2 = ((unsigned)0 < (unsigned)a0) ? 1 : 0;                  // 0x00166790: sltu $a2, $zero, $a0
    func_001669c8();  // 0x166978                                // 0x00166794: jal 0x166978
    v1 = *(int32_t*)(s1);                                       // 0x0016679c: lw $v1, 0($s1)
    a0 = *(int32_t*)(s2);                                       // 0x001667a0: lw $a0, 0($s2)
    s0 = s0 + 0x10;                                             // 0x001667a4: addiu $s0, $s0, 0x10
    v0 = s3 + 0x14e0;                                           // 0x001667a8: addiu $v0, $s3, 0x14e0
    s3 = s3 + 0x1a44;                                           // 0x001667ac: addiu $s3, $s3, 0x1a44
    *(uint32_t*)(s0) = v1;                                      // 0x001667b0: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 4) = a0;                                // 0x001667b4: sw $a0, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001667b8: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x001667bc: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x001667c0: sw $v0, 0x10($s0)
    v0 = 0xf;                                                   // 0x001667c4: addiu $v0, $zero, 0xf
label_0x1667c8:
    v0 = v0 + -1;                                               // 0x001667c8: addiu $v0, $v0, -1
    *(uint32_t*)(s3) = 0;                                       // 0x001667cc: sw $zero, 0($s3)
    /* nop */                                                   // 0x001667d0: nop 
    /* nop */                                                   // 0x001667d4: nop 
    /* nop */                                                   // 0x001667d8: nop 
    if (v0 >= 0) goto label_0x1667c8;                           // 0x001667dc: bgez $v0, 0x1667c8
    s3 = s3 + -0x5c;                                            // 0x001667e0: addiu $s3, $s3, -0x5c
    return;                                                     // 0x001667f8: jr $ra
    sp = sp + 0x30;                                             // 0x001667fc: addiu $sp, $sp, 0x30
}