void func_001441c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001441c0: addiu $sp, $sp, -0x60
    s4 = 1;                                                     // 0x001441cc: addiu $s4, $zero, 1
    s3 = 3;                                                     // 0x001441d4: addiu $s3, $zero, 3
    *(uint32_t*)((s2) + 0x828) = 0;                             // 0x001441e8: sw $zero, 0x828($s2)
    v0 = *(int32_t*)((s2) + 0x148);                             // 0x001441ec: lw $v0, 0x148($s2)
    a0 = *(int32_t*)((s2) + 0x144);                             // 0x001441f0: lw $a0, 0x144($s2)
    v1 = *(int32_t*)((s2) + 0x18c);                             // 0x001441f4: lw $v1, 0x18c($s2)
    *(uint32_t*)((s2) + 0x82c) = 0;                             // 0x001441fc: sw $zero, 0x82c($s2)
    v1 = v1 ^ 3;                                                // 0x00144200: xori $v1, $v1, 3
    v0 = s1 >> 1;                                               // 0x00144204: sra $v0, $s1, 1
    if (v1 != 0) s1 = v0;                                       // 0x00144208: movn $s1, $v0, $v1
    /* nop */                                                   // 0x0014420c: nop 
label_0x144210:
label_0x144214:
    func_00144608();  // 0x144408                                // 0x00144214: jal 0x144408
    if (s0 == s4) goto label_0x144214;                          // 0x00144220: beq $s0, $s4, 0x144214
    if (s0 == s3) goto label_0x144210;                          // 0x00144228: beq $s0, $s3, 0x144210
    /* nop */                                                   // 0x0014422c: nop 
    func_00145080();  // 0x144f18                                // 0x00144230: jal 0x144f18
    func_00143f08();  // 0x143c70                                // 0x00144238: jal 0x143c70
    if (v0 != 0) goto label_0x14425c;                           // 0x00144240: bnez $v0, 0x14425c
    v1 = 0x1000 << 16;                                          // 0x00144244: lui $v1, 0x1000
    v0 = *(int32_t*)((s2) + 0x10a0);                            // 0x00144248: lw $v0, 0x10a0($s2)
    if (v0 != 0) goto label_0x1442b8;                           // 0x0014424c: bnez $v0, 0x1442b8
    v0 = 4;                                                     // 0x00144250: addiu $v0, $zero, 4
    s0 = 2;                                                     // 0x00144254: addiu $s0, $zero, 2
    v1 = 0x1000 << 16;                                          // 0x00144258: lui $v1, 0x1000
label_0x14425c:
    s1 = s0 + -1;                                               // 0x0014425c: addiu $s1, $s0, -1
    s3 = ((unsigned)s0 < (unsigned)1) ? 1 : 0;                  // 0x00144260: sltiu $s3, $s0, 1
    v1 = v1 | 0xd400;                                           // 0x00144264: ori $v1, $v1, 0xd400
label_0x144268:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00144268: lw $v0, 0($v1)
    v0 = (unsigned)v0 >> 8;                                     // 0x0014426c: srl $v0, $v0, 8
    v0 = v0 & 1;                                                // 0x00144270: andi $v0, $v0, 1
    /* nop */                                                   // 0x00144274: nop 
    /* nop */                                                   // 0x00144278: nop 
    if (v0 != 0) goto label_0x144268;                           // 0x0014427c: bnez $v0, 0x144268
    /* nop */                                                   // 0x00144280: nop 
    if (s0 != 0) goto label_0x1442a0;                           // 0x00144284: bnez $s0, 0x1442a0
    v0 = ((unsigned)s1 < (unsigned)2) ? 1 : 0;                  // 0x00144288: sltiu $v0, $s1, 2
    a1 = *(int32_t*)((s2) + 0x828);                             // 0x0014428c: lw $a1, 0x828($s2)
    func_00143c48();  // 0x142c78                                // 0x00144294: jal 0x142c78
    a1 = ((unsigned)a1 < (unsigned)1) ? 1 : 0;                  // 0x00144298: sltiu $a1, $a1, 1
    v0 = ((unsigned)s1 < (unsigned)2) ? 1 : 0;                  // 0x0014429c: sltiu $v0, $s1, 2
label_0x1442a0:
    if (v0 == 0) goto label_0x1442b4;                           // 0x001442a0: beqz $v0, 0x1442b4
    a1 = 0x22 << 16;                                            // 0x001442a8: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x001442ac: jal 0x148530
    a1 = &str_002266a0;  // "slice_start_code(0x%08x) out of range" // 0x001442b0: addiu $a1, $a1, 0x66a0
label_0x1442b4:
label_0x1442b8:
    return;                                                     // 0x001442d0: jr $ra
    sp = sp + 0x60;                                             // 0x001442d4: addiu $sp, $sp, 0x60
}