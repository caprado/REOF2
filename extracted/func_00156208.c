void func_00156208() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00156208: addiu $sp, $sp, -0x30
    func_00157a80();  // 0x157a00                                // 0x00156234: jal 0x157a00
    *(uint32_t*)(s3) = 0;                                       // 0x00156238: sw $zero, 0($s3)
    a0 = s1 + 0x20;                                             // 0x0015623c: addiu $a0, $s1, 0x20
    v0 = 2 << 16;                                               // 0x00156244: lui $v0, 2
    *(uint32_t*)(s0) = v1;                                      // 0x00156248: sw $v1, 0($s0)
    if (v1 == v0) goto label_0x1562b0;                          // 0x00156258: beq $v1, $v0, 0x1562b0
    a3 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0015625c: sltu $a3, $v0, $v1
    if (a3 != 0) goto label_0x156280;                           // 0x00156260: bnez $a3, 0x156280
    v0 = 4 << 16;                                               // 0x00156264: lui $v0, 4
    v0 = 1 << 16;                                               // 0x00156268: lui $v0, 1
    if (v1 == v0) goto label_0x156290;                          // 0x0015626c: beq $v1, $v0, 0x156290
    goto label_0x1562dc;                                        // 0x00156274: b 0x1562dc
    /* nop */                                                   // 0x0015627c: nop 
label_0x156280:
    if (v1 == v0) goto label_0x1562c0;                          // 0x00156280: beq $v1, $v0, 0x1562c0
    goto label_0x1562dc;                                        // 0x00156288: b 0x1562dc
label_0x156290:
    a0 = s1 + 0x14;                                             // 0x00156290: addiu $a0, $s1, 0x14
    func_00156758();  // 0x1562f8                                // 0x0015629c: jal 0x1562f8
    s0 = 1;                                                     // 0x001562a0: addiu $s0, $zero, 1
    goto label_0x1562d8;                                        // 0x001562a4: b 0x1562d8
    /* nop */                                                   // 0x001562ac: nop 
label_0x1562b0:
    func_00156d98();  // 0x156758                                // 0x001562b0: jal 0x156758
    s0 = 1;                                                     // 0x001562b4: addiu $s0, $zero, 1
    goto label_0x1562d8;                                        // 0x001562b8: b 0x1562d8
label_0x1562c0:
    a3 = *(int32_t*)((s1) + 0x10);                              // 0x001562c0: lw $a3, 0x10($s1)
    func_001579e8();  // 0x156d98                                // 0x001562cc: jal 0x156d98
    a0 = s1 + 0xa0;                                             // 0x001562d0: addiu $a0, $s1, 0xa0
label_0x1562d8:
label_0x1562dc:
    return;                                                     // 0x001562ec: jr $ra
    sp = sp + 0x30;                                             // 0x001562f0: addiu $sp, $sp, 0x30
}