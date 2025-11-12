void func_00146028() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x00146028: addiu $sp, $sp, -0x70
    v0 = *(int32_t*)((s1) + 0x154);                             // 0x0014604c: lw $v0, 0x154($s1)
    /* beqzl $v0, 0x146074 */                                   // 0x00146050: beqzl $v0, 0x146074
    v1 = *(int32_t*)((s1) + 0x18c);                             // 0x00146054: lw $v1, 0x18c($s1)
    v0 = *(int32_t*)((s1) + 0x19c);                             // 0x00146058: lw $v0, 0x19c($s1)
    if (v0 == 0) goto label_0x146080;                           // 0x0014605c: beqz $v0, 0x146080
    s3 = 2;                                                     // 0x00146060: addiu $s3, $zero, 2
    v1 = *(int32_t*)((s1) + 0x190);                             // 0x00146064: lw $v1, 0x190($s1)
    v0 = 3;                                                     // 0x00146068: addiu $v0, $zero, 3
    goto label_0x146090;                                        // 0x0014606c: b 0x146090
    if (v1 != 0) s3 = v0;                                       // 0x00146070: movn $s3, $v0, $v1
    v0 = 3;                                                     // 0x00146074: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x146088;                          // 0x00146078: beql $v1, $v0, 0x146088
    v0 = *(int32_t*)((s1) + 0x19c);                             // 0x0014607c: lw $v0, 0x19c($s1)
label_0x146080:
    goto label_0x146090;                                        // 0x00146080: b 0x146090
    s3 = 1;                                                     // 0x00146084: addiu $s3, $zero, 1
label_0x146088:
    s3 = 2;                                                     // 0x00146088: addiu $s3, $zero, 2
    if (v0 != 0) s3 = v1;                                       // 0x0014608c: movn $s3, $v1, $v0
label_0x146090:
    if (s3 <= 0) goto label_0x1460f8;                           // 0x00146090: blez $s3, 0x1460f8
    s5 = s1 + 0x1a4;                                            // 0x00146098: addiu $s5, $s1, 0x1a4
    s4 = s1 + 0x1b0;                                            // 0x0014609c: addiu $s4, $s1, 0x1b0
    /* nop */                                                   // 0x001460a4: nop 
label_0x1460a8:
    func_00145818();  // 0x1456a8                                // 0x001460a8: jal 0x1456a8
    a1 = 0x10;                                                  // 0x001460ac: addiu $a1, $zero, 0x10
    s0 = s2 << 2;                                               // 0x001460b0: sll $s0, $s2, 2
    v1 = s5 + s0;                                               // 0x001460b4: addu $v1, $s5, $s0
    *(uint32_t*)(v1) = v0;                                      // 0x001460bc: sw $v0, 0($v1)
    func_00145818();  // 0x1456a8                                // 0x001460c0: jal 0x1456a8
    a1 = 1;                                                     // 0x001460c4: addiu $a1, $zero, 1
    s2 = s2 + 1;                                                // 0x001460c8: addiu $s2, $s2, 1
    func_00145818();  // 0x1456a8                                // 0x001460d0: jal 0x1456a8
    a1 = 0x10;                                                  // 0x001460d4: addiu $a1, $zero, 0x10
    s0 = s4 + s0;                                               // 0x001460d8: addu $s0, $s4, $s0
    *(uint32_t*)(s0) = v0;                                      // 0x001460e0: sw $v0, 0($s0)
    func_00145818();  // 0x1456a8                                // 0x001460e4: jal 0x1456a8
    a1 = 1;                                                     // 0x001460e8: addiu $a1, $zero, 1
    v1 = (s2 < s3) ? 1 : 0;                                     // 0x001460ec: slt $v1, $s2, $s3
    if (v1 != 0) goto label_0x1460a8;                           // 0x001460f0: bnez $v1, 0x1460a8
label_0x1460f8:
    return;                                                     // 0x00146114: jr $ra
    sp = sp + 0x70;                                             // 0x00146118: addiu $sp, $sp, 0x70
}