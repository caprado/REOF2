void func_001a12a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a12a0: addiu $sp, $sp, -0x20
    a1 = *(int32_t*)(a0);                                       // 0x001a12ac: lw $a1, 0($a0)
    goto label_0x1a12ec;                                        // 0x001a12b0: b 0x1a12ec
label_0x1a12b8:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a12b8: lw $v0, 8($a0)
    v1 = s0 << 4;                                               // 0x001a12bc: sll $v1, $s0, 4
    v1 = v0 + v1;                                               // 0x001a12c0: addu $v1, $v0, $v1
    v0 = *(int32_t*)((v1) + 4);                                 // 0x001a12c4: lw $v0, 4($v1)
    if (v0 != 0) goto label_0x1a12e8;                           // 0x001a12c8: bnez $v0, 0x1a12e8
    /* nop */                                                   // 0x001a12cc: nop 
    func_001a5750();  // 0x1a5720                                // 0x001a12d8: jal 0x1a5720
    a2 = 0x10;                                                  // 0x001a12dc: addiu $a2, $zero, 0x10
    goto label_0x1a12f8;                                        // 0x001a12e0: b 0x1a12f8
label_0x1a12e8:
    s0 = s0 + 1;                                                // 0x001a12e8: addiu $s0, $s0, 1
label_0x1a12ec:
    v0 = (s0 < a1) ? 1 : 0;                                     // 0x001a12ec: slt $v0, $s0, $a1
    if (v0 != 0) goto label_0x1a12b8;                           // 0x001a12f0: bnez $v0, 0x1a12b8
    v0 = 0 | 0xffff;                                            // 0x001a12f4: ori $v0, $zero, 0xffff
label_0x1a12f8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a12fc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a1300: jr $ra
    sp = sp + 0x20;                                             // 0x001a1304: addiu $sp, $sp, 0x20
}